#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "appendData.h"
#include<string>
#include <vector>
#include <locale>
#include <codecvt>
vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring>> Database::list;
Database::Database(const char* name)
{
	dbname = name;
}
Database::~Database()
{
	sqlite3_close(db);
}
bool Database::Open()
{
	res = sqlite3_open(dbname, &db);
	return res;

}

bool Database::Insert(wstring table, wstring listtitle, wstring values)
{
	sqlite3_stmt* stmt = NULL;
	sql = L"INSERT INTO " + table + L" " + listtitle + L" VALUES" + values + L"; ";
	res = sqlite3_prepare16_v2(db, sql.c_str(), -1, &stmt, NULL);
	res = sqlite3_step(stmt);
	if (res != SQLITE_DONE)
	{
	string err = sqlite3_errmsg(db);
		return 0;

	}
	sqlite3_finalize(stmt);
	return 1;

}
bool Database::Insert_file(wstring table, wstring listtitle, wstring values, int* index, unsigned int indlen, wstring *path, unsigned int pathlen)
{
	sqlite3_stmt* stmt = NULL;
	sql = L"INSERT INTO " + table + L" " + listtitle + L" VALUES" + values + L"; ";
	res = sqlite3_prepare16_v2(db, sql.c_str(), -1, &stmt, NULL);
	for (int i = 0; i < pathlen; i++)
	{
		if (path[i] == L"NULL")
			continue;
		ifstream ifs(path[i], std::ios::binary);
		int size = ifs.seekg(0, std::ios::end).tellg();
		ifs.seekg(0);
		char* buffer = new char[size];
		memset(buffer, 0, size);
		ifs.read(buffer, size);
		ifs.close();
		res = sqlite3_bind_blob(stmt, index[i], buffer, size, SQLITE_STATIC);
		res = sqlite3_bind_int(stmt, index[i] + 1, size);
		if (res != SQLITE_OK)
		{

		}

	}

	res = sqlite3_step(stmt);
	if (res != SQLITE_DONE)
	{
	std::cerr << "Execution Failed: " << sqlite3_errmsg(db) << std::endl;
		return 0;

	}
	sqlite3_finalize(stmt);


}
int Database::callback(void* NotUsed, int argc, char** argv, char** azColName) 
{
	vector<wstring> arr;
	arr.clear();
	int item = 0;
	for (size_t i = 0; i < argc; i++)
	{
		//cout << azColName[i] << " : "; // col Name
		if (i < 13)
		{

			if (argv[i] != NULL)
			{
				std::wstring str_turned_to_wstr = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(argv[i]);
				arr.push_back(str_turned_to_wstr);
			}
			else
			{

				arr.push_back(L"NULL");
			}
			// cout << argv[i] ? argv[i] : "NULL";
			if (item == 12)
			{
				list.push_back(std::make_tuple(arr[0],arr[1],arr[2],arr[3],arr[4],arr[5], arr[6], arr[7], arr[8], arr[9], arr[10], arr[11],arr[12]));
				item = 0;
			}
			item++;
		}
	}
	return 0;
}

void Database::Select(vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring>>& result,string table, string item = "*", wstring condition = L"",string order="")
{
	sqlite3_stmt* res;
	list.clear();
	wstring sql2;
	std::wstring Item = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(item);
	std::wstring Table = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(table);
	std::wstring Order = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(order);

	sql2 = L"SELECT " + Item + L" from " + Table +L" "+ condition +L" "+ Order;
	char data[] = "Callback function called";
	char* err;
	const wchar_t* we = sql2.c_str();
	int rc = sqlite3_prepare16_v2(db, sql2.c_str(), -1, &res, 0);

	if (rc != SQLITE_OK) {

		fprintf(stderr, "Failed to fetch data: %s\n", sqlite3_errmsg(db));

		return;
	}


	while (sqlite3_step(res) == SQLITE_ROW) 
	{
		wstring a = static_cast<const wchar_t*>(sqlite3_column_text16(res, 1));
		list.push_back(std::make_tuple(static_cast<const wchar_t*>( sqlite3_column_text16(res, 0)), static_cast<const wchar_t*>( sqlite3_column_text16(res, 1)),static_cast<const wchar_t*>( sqlite3_column_text16(res, 2)),
			static_cast<const wchar_t*>( sqlite3_column_text16(res, 3)),static_cast<const wchar_t*>( sqlite3_column_text16(res, 4)),static_cast<const wchar_t*>( sqlite3_column_text16(res, 5)),static_cast<const wchar_t*>( sqlite3_column_text16(res, 6)),
			static_cast<const wchar_t*>( sqlite3_column_text16(res, 7)),static_cast<const wchar_t*>( sqlite3_column_text16(res, 8)),static_cast<const wchar_t*>( sqlite3_column_text16(res, 9)),static_cast<const wchar_t*>( sqlite3_column_text16(res, 10)),
			static_cast<const wchar_t*>( sqlite3_column_text16(res, 11)), static_cast<const wchar_t*>( sqlite3_column_text16(res, 12))));
			
	}

	sqlite3_finalize(res);

	//res = sqlite3_exec(db, we, callback, (void*)data, &err);
	result = list;
	//sqlite3_close(db);
	return;
}
int Database::decode_massage(wstring mssg)
{
	wstring socket_id;
	wstring request_type;
	wstring req;
	try
	{
		socket_id = mssg.substr(0, 4);
		request_type = mssg.substr(mssg.find_first_of('_') + 1, mssg.find_first_of('-') - mssg.find_first_of('_')-1);
	}
	catch (const std::exception&)
	{
		return 0;
	}
	if (request_type == L"[genre select]")
	{
		vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring,
			wstring, wstring, wstring, wstring>> result;
		req = mssg.substr(mssg.find_first_of('-') + 1, mssg.length() - 2 - mssg.find_first_of('-'));
		wstring genre  = req.substr(req.find_first_of('(') + 1, req.length() - 2- req.find_first_of('('));
		Select(result, "Books", "*", L"WHERE Genre = '" + genre + L"'", "ORDER BY ID ASC");

	}
	else if (request_type == L"[recent books]")
	{
		vector<tuple<wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring,
			wstring, wstring, wstring, wstring>> result;
		Select(result, "Books", "*", L"","");
		result.erase(result.begin() + 9, result.end());
	}
	else if (request_type == L"[sign in]")
	{

	}
	else if (request_type == L"[forgot passsword]")
	{

	}
	else if (request_type == L"[sign up]")
	{

	}
	else if (request_type == L"[purchase book]")
	{

	}
	return 1;
}
int Database::generating_id(int start, int end)
{
	srand((unsigned)time(0));
	return rand() % end;
}

Database* CreateObject(const char* name)
{
	Database* me = new Database(name);
	return	me;
}
//bool  Open_(Database * obj)
//{
//	bool result = obj->Open();
//		return result;
//}

