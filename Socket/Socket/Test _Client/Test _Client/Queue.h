#ifndef QUEUE_H
#define QUEUE_H
#include<map>
#include <string>
#include <thread>
#include <mutex>
#include <fstream>
#include <vector>
#include "FileHandler.h"
#include "Packets.h"
#include "Serialize.h"
#include "CleintConnection.h"
using namespace std;
class Queue;

typedef  void(__stdcall* ChanheProgress)(int Queueid, int value);
enum QueueTYPE
{
	download,
	upload
};
class Queue
{
private:

	Queue();
	void TrenasferProc(Queue*);
	string FilePath;
	thread SendThread;
	mutex sendDoor;
	ifstream readfile;
	ofstream writefile;
	long long Treansfered;
	long long Index;
	int Progress, LastProgress;
	bool Running;
	int SocketID;
	ChanheProgress chanheprogress;
public:
	string FileName;
	string FileExtention;
	long long Length;
	int QueueID;
	QueueTYPE Type;
	static Queue* Upload(int socketid, string path, int QueueID, ChanheProgress chanheprogress);
	static Queue* Download(int socketid, int QueueID, string FileName, string FileExtention, long size, ChanheProgress chanheprogress);
	void SetProgress(int read);
	void Start();
	void Close();
	void Write(const char const* Buffer, int Read);

};
#endif // !QUEUE_H
