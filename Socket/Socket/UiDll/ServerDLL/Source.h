#ifndef SOURCE_H
#define SOURCE_H
#include <windows.h>
#include "appendData.h"
#include "TCPListener.h"
#include "Serialize.h"
#include <thread>
#include <iostream>
#include <mutex>
#include "Queue.h"
#include <algorithm>

map<string, int> ClientList;
static int ClientNum = 0;
TCPListener tcpServer;
std::mutex ClientLiatDoor;
std::mutex QueueListDoor;
std::mutex QueueDoor;

std::map<int, Queue*> Queue_List;

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


void  Client(int Socketid, bool flag);
void  changeprogress(int queueid, int i);
void  Recieve(int socketid, char* buffer, int size);

extern "C" UI_ALPI void  Startup(string ip, int port, UIChangeProgress  uiChangeprogress, UINewClient uiNewclient, UINewRecieve  uiNewrecieve);

extern "C" UI_ALPI int StartDownload( int queueid);
extern "C" UI_ALPI void sendmessage();
extern "C" UI_ALPI void thread_wait();
extern "C" UI_ALPI void get_client_name(string & name , int id);
extern "C" UI_ALPI int SendFile(string path, string username);

extern "C" UI_ALPI Database * CreateObject(const char* k);
extern "C" UI_ALPI bool Open_(Database*);
extern "C" UI_ALPI bool Insert(Database*, wstring, wstring, wstring);
extern "C" UI_ALPI bool Insert_file_(Database*, wstring, wstring, wstring, int*, unsigned int, wstring*, unsigned int);
extern "C" UI_ALPI void select_(Database*, vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring>>&, string, string, wstring, string);
extern "C" UI_ALPI void select_admin(Database * db, vector<tuple<wstring, wstring>>&result, string table, string item, wstring condition, string order);
extern "C" UI_ALPI void Update_(Database * db, wstring table, wstring listtitle, wstring condition);



#endif // !SOURCE_H
