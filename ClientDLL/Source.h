#ifndef SOURCE_H
#define SOURCE_H
#include <windows.h>

#include "CleintConnection.h"
#include "Serialize.h"
#include <thread>
#include <iostream>
#include <mutex>
#include "Queue.h"
#include <algorithm>

CleintConnection tcpConnection;
std::mutex ClientLiatDoor;
std::mutex QueueListDoor;
std::mutex QueueDoor;

std::map<int, Queue*> QueueList;

typedef void(* UIChangeProgress)(int queueid, int value);
typedef void(* UINewClient)(string username , bool flag);
typedef void(* UINewRecieve)(int Queueid, std::string Name, std::string Extention);

UIChangeProgress  uiChangeProgress;
UINewClient  uiNewClient;
UINewRecieve  uiNewRecieve;


bool ready = false;
std::mutex mtx;
std::condition_variable cv;

#ifdef UI_ALPI
#define  UI_ALPI __declspec(dllexport)
#else
#define  UI_ALPI __declspec(dllimport)
#endif // DEBUG


void  Client(bool flag);
void changeprogress(int queueid, int i);
void  Reciev(char* buffer, int size);

extern "C" UI_ALPI void  Startup(string ip, int port, UIChangeProgress  uiChangeprogress, UINewClient uiNewclient, UINewRecieve  uiNewrecieve);

extern "C" UI_ALPI void StartDownload(int socketid, int queueid);
extern "C" UI_ALPI void sendmessage();
extern "C" UI_ALPI void thread_wait();
extern "C" UI_ALPI void SendFile(string path);


#endif // !SOURCE_H
