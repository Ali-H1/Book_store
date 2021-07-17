#include "Queue.h"
#include <cmath>
Queue* Queue::Upload(int socketid, string path, int QueueID, ChanheProgress chanheprogress)
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
		if (!item->readfile.is_open()) {

			throw "File can not open";
		}
		item->Length = item->readfile.seekg(0, std::ios::end).tellg();
		item->readfile.seekg(0);
		return item;
}
Queue* Queue::Download(int socketid, int QueueID, string FileName, string FileExtention, long size, ChanheProgress chanheprogress)
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
		item->writefile = std::ofstream(item->FilePath, std::ios::binary);
		if (!item->writefile.is_open())
			return nullptr;
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
		chanheprogress(this->QueueID , this->LastProgress);
	
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
		FileHandler::ConvertTmpToStableFile(this->FilePath, this->FileExtention);
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
vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring,
	wstring, wstring, wstring>> result;

int decode_respond(wstring mssg ,int id_length)
{
	wstring socket_id;
	wstring request_type;
	wstring req;
	try
	{
		socket_id = mssg.substr(0, id_length);
		request_type = mssg.substr(mssg.find_first_of('_') + 1, mssg.find_first_of('-') - mssg.find_first_of('_') - 1);
		req = mssg.substr(mssg.find_first_of('-') + 1, mssg.length() - mssg.find_first_of('-') - 2);
	}
	catch (const std::exception&)
	{
		return 0;
	}

	if (request_type == L"[genre select]" || request_type == L"[recent books]")
	{
		wstring id, title, author, genre, year, edition, translator, price, publisher, language, summery, digital, cover;
		wstring end = L"[[End]]", id_ = L"id=", title_= L"title=", author_ = L"author=", genre_ = L"genre=", year_ = L"year=", 
			edition_ = L"edition=", translator_ = L"translator=", price_ = L"price=", publisher_ = L"publisher=", language_ = L"language=",
			summery_ = L"summery=", digital_ = L"digital=", cover_ = L"cover=";
		int num_of_results=0;
		for (int i = 0; i < req.length()-6; i++)
		{
			if (req[i] == '[' && req[i + 1] == '[' && req[i + 2] == 'E' && req[i + 3] == 'n' && req[i + 4] == 'd' && req[i + 5] == ']' && req[i + 6] == ']')
				num_of_results++;
		}
		for (int i = 0; i < num_of_results; i++)
		{
			id=req.substr(req.find(id_) + 3, req.find(title_) - req.find(id_) - 4);
			title = req.substr(req.find(title_) + 6, req.find(author_) - req.find(title_) - 7);
			author = req.substr(req.find(author_) + 7, req.find(genre_) - req.find(author_) - 8);
			genre = req.substr(req.find(genre_) + 6, req.find(year_) - req.find(genre_) - 7);
			year = req.substr(req.find(year_) + 5, req.find(edition_) - req.find(year_) - 6);
			edition = req.substr(req.find(edition_) + 8, req.find(translator_) - req.find(edition_) - 9);
			translator = req.substr(req.find(translator_) + 11, req.find(price_) - req.find(translator_) - 12);
			price = req.substr(req.find(price_) + 6, req.find(publisher_) - req.find(price_) - 7);
			publisher = req.substr(req.find(publisher_) + 10, req.find(language_) - req.find(publisher_) - 11);
			language = req.substr(req.find(language_) + 9, req.find(summery_) - req.find(language) - 10);
			summery = req.substr(req.find(summery_) + 8, req.find(digital_) - req.find(summery_) - 9);
			digital = req.substr(req.find(digital_) + 8, req.find(cover_) - req.find(digital_) - 9);
			cover = req.substr(req.find(cover_) + 6, req.find(end) - req.find(cover_) - 7);
			result.push_back(make_tuple(id, title, author, genre, year, edition, translator, price, publisher, language, summery, digital, cover));


		}
	}
	
	else if (request_type == L"[sign in]")
	{
		req = mssg.substr(mssg.find_first_of('-') + 1, mssg.length() - 2 - mssg.find_first_of('-'));
		//wstring email = req.substr(req.find_first_of(':') + 1, req.find_first_of('|') - 1 - req.find_first_of(':'));
		//wstring password = req.substr(req.find_last_of(':') + 1, req.length() - 1 - req.find_last_of(':'));


	}
	else if (request_type == L"[forgot passsword]")
	{
		//req = mssg.substr(mssg.find_first_of('-') + 1, mssg.length() - 2 - mssg.find_first_of('-'));
		//wstring email = req.substr(req.find_first_of(':') + 1, req.length() - 1 - req.find_last_of(':'));

	}
	else if (request_type == L"[sign up]")
	{

	}
	else if (request_type == L"[purchase book]")
	{

	}

}
void Queue::Write(const char const* Buffer, int Read)
{

	this->writefile.write(Buffer, Read);
	string temp = Buffer;
	temp = temp.erase(0, temp.find_first_of('_'));
	string buffer = to_string(this->SocketID)  + temp + "\n";
	int socket_id = (this->SocketID);
	int id_length = socket_id > 0 ? (int)log10((double)socket_id) + 1 : 1;
	int res = decode_respond(s2ws(buffer),id_length);
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