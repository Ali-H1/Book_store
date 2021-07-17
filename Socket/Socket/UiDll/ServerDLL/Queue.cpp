#include "pch.h"
#include "Queue.h"
#include <cmath>

Queue* Queue::Upload(int socketid, string path, int QueueID , ChanheProgress chanheprogress=nullptr)
{
	try
	{
		Queue* item = new Queue();
		item->QueueID = QueueID;
		item->chanheprogress = chanheprogress;
		item->SocketID = socketid;
		item->FileName = FileHandler::GetFileNameWhitOutExtention(path);
		item->FileExtention = FileHandler::GetFileExtention(path);
		item->FilePath = path;
		item->Index = 0;
		item->Treansfered = 0;
		item->Progress = 0;
		item->LastProgress = 0;
		item->Type = QueueTYPE::upload;
		item->readfile = std::ifstream(path, std::ios::binary);
		if (!item->readfile.is_open())
			return nullptr;
		item->Length = item->readfile.seekg(0, std::ios::end).tellg();
		item->readfile.seekg(0);
		return item;

	}
	catch (...)
	{
		return nullptr;
	}
}
Queue* Queue::Download(int socketid,int QueueID,  string FileName, string FileExtention, long size, ChanheProgress chanheprogress)
{
	try
	{
		Queue* item = new Queue();
		item->QueueID = QueueID;
		item->chanheprogress = chanheprogress;
		item->SocketID = socketid;
		item->FileName = FileName;
		item->FileExtention = FileExtention;
		item->FilePath = FileHandler::Combine(".", FileHandler::TempPath(FileName));
		item->Index = 0;
		item->Treansfered = 0;
		item->Progress = 0;
		item->LastProgress = 0;
		item->Type = QueueTYPE::download;
		//item->writefile = std::ofstream(item->FilePath, std::ios::binary);
		//if (!item->writefile.is_open())
		//	return nullptr;
		item->Length = size;
		return item;
	}
	catch (...)
	{
		return nullptr;
	}
}
void Queue::SetProgress(int read) 
{
	this->Index += read;
	this->Treansfered += read;
	this->Progress = (int)((this->Treansfered * 100) / this->Length);
	if (this->LastProgress < this->Progress)
		this->LastProgress = this->Progress;
	if (this->LastProgress == 100)
		this->Close();
	if (chanheprogress != NULL)
		chanheprogress(this->QueueID, this->LastProgress);
}
void Queue::Start()
{
	this->Running = true;
	this->SendThread = thread([&]() {TrenasferProc(this); });
}
void Queue::Close()
{
	if (this->Type == QueueTYPE::download)
	{
		this->writefile.close();
		FileHandler::ConvertTmpToStableFile(this->FilePath , this->FileExtention);
	}
	else if (this->Type == QueueTYPE::upload)
	{
		this->readfile.close();
		this->Running = false;
		this->SendThread.detach();
	}
}
wstring s2ws(const string& str)
{
	int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
	return wstrTo;
}
void Queue::Write(const char const* Buffer, int Read) 
{
	
		//this->writefile.write(Buffer, Read);
		Database req("ServerDataBase.db");
		req.Open();
		//ofstream request("REQUESTS.txt", ios::app | ios::binary);
		string buffer = to_string(this->SocketID)+"_"+ Buffer+"\n";
		int socket_id = (this->SocketID);
		int id_length = socket_id > 0 ? (int)log10((double)socket_id) + 1 : 1;
		req.decode_massage(s2ws(buffer), id_length);
		//SendFile("C:\\Users\\ASUS\\source\\repos\\Ali-H1\\Book_store\\Socket\\Socket\\Test _Client\\test2.txt", SocketID);
		//request.write(buffer.c_str(),Read+sizeof(this->SocketID)+2);
		SetProgress(Read);
}
void Queue::TrenasferProc(Queue* item) 
{
	while (item->Running && item->Index < item->Length)
	{
		sendDoor.lock();

		long read = (item->Length - item->Index < SIZE_FileBuffer) ? item->Length - item->Index : SIZE_FileBuffer;

		FilePacket fp;
		fp.header = Header::chunck;
		fp.QueueId = item->QueueID;
		fp.Read = read;
		item->readfile.read(fp.Buffer, read);
		
		char Buffer[SIZE_Buffer];
		memset(Buffer, 0, SIZE_Buffer);
		int size = Serialize< FilePacket>::serialize(Buffer, fp);
		send(this->SocketID, Buffer, size, 0);
		SetProgress(read);
		sendDoor.unlock();
		std::this_thread::sleep_for(std::chrono::microseconds(5));
	}

}
Queue::Queue()
{

}