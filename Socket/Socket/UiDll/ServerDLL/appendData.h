#include <string>
#include "sqlite3.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <tuple>
using std::string;
using std::wstring;
using std::vector;
using std::ifstream;
using std::tuple;


class Database
{
private:
	sqlite3* db;
	int res;
	wstring sql;
	const char* dbname;
	static vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring>>list;
	vector<tuple< wstring, wstring>> adminlist;
	static int callback(void* , int , char** , char**);

public:

	Database(const char* name);
	~Database();
	bool Open();
	bool Insert(wstring , wstring , wstring );
	bool Insert_file(wstring, wstring, wstring, int* , unsigned int , wstring* , unsigned int );
	void Select(vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring,wstring, wstring, wstring, wstring, wstring, wstring, wstring>>& ,string , string , wstring, string);
	void Select_admin(vector<tuple< wstring, wstring>>& result, string table, string item = "*", wstring condition = L"", string order = "");

	int generating_id(int , int );
	int decode_respond(string, int id_length);
	int df;
};