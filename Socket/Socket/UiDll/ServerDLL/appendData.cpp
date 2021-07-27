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
bool Database::Update(wstring table, wstring listtitle, wstring condition)
{
	sqlite3_stmt* stmt = NULL;
	sql = L"UPDATE " + table + L" " + listtitle + condition + L"; ";
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
		{
			int size  = sizeof("NULL");
			const char* buffer = new char[size];
			buffer = "NULL";
			res = sqlite3_bind_blob(stmt, index[i], buffer, size, SQLITE_STATIC);
			res = sqlite3_bind_int(stmt, index[i] + 1, size);

		}
		else
		{
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
void Database::Select_admin(vector<tuple< wstring, wstring>>& result, string table, string item, wstring condition, string order)
{
	sqlite3_stmt* res;
	adminlist.clear();
	wstring sql2;
	std::wstring Item = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(item);
	std::wstring Table = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(table);
	std::wstring Order = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(order);

	sql2 = L"SELECT " + Item + L" from " + Table + L" " + condition + L" " + Order;
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
		adminlist.push_back(std::make_tuple(static_cast<const wchar_t*>(sqlite3_column_text16(res, 0)), static_cast<const wchar_t*>(sqlite3_column_text16(res, 1))));


	}

	sqlite3_finalize(res);

	//res = sqlite3_exec(db, we, callback, (void*)data, &err);
	result = adminlist;
	//sqlite3_close(db);
	return;
}
void Database::Select_users(vector<tuple< wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring>>& result, string table, string item, wstring condition, string order)
{
	sqlite3_stmt* res;
	userlist.clear();
	wstring sql2;
	std::wstring Item = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(item);
	std::wstring Table = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(table);
	std::wstring Order = std::wstring_convert<std::codecvt_utf8<wchar_t>>().from_bytes(order);

	sql2 = L"SELECT " + Item + L" from " + Table + L" " + condition + L" " + Order;
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
		userlist.push_back(std::make_tuple(static_cast<const wchar_t*>(sqlite3_column_text16(res, 0)), static_cast<const wchar_t*>(sqlite3_column_text16(res, 1)),
			static_cast<const wchar_t*>(sqlite3_column_text16(res, 2)), static_cast<const wchar_t*>(sqlite3_column_text16(res, 3)),
			static_cast<const wchar_t*>(sqlite3_column_text16(res, 4)),
			static_cast<const wchar_t*>(sqlite3_column_text16(res, 5)), static_cast<const wchar_t*>(sqlite3_column_text16(res, 6)),
			static_cast<const wchar_t*>(sqlite3_column_text16(res, 7)), static_cast<const wchar_t*>(sqlite3_column_text16(res, 8)),
			static_cast<const wchar_t*>(sqlite3_column_text16(res, 9))));


	}

	sqlite3_finalize(res);

	//res = sqlite3_exec(db, we, callback, (void*)data, &err);
	result = userlist;
	//sqlite3_close(db);
	return;
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

int Database::decode_respond(string txt, int id_length)
{
	wstring mssg = s2ws(txt);
	wstring socket_id;
	wstring request_type;
	wstring req;
	try
	{
		socket_id = mssg.substr(0, id_length);
		request_type = mssg.substr(mssg.find_first_of('_') + 1, mssg.find_first_of('-') - mssg.find_first_of('_') - 2);
		req = mssg.substr(mssg.find_first_of('-') + 1, mssg.length() - mssg.find_first_of('-') - 2);
	}
	catch (const std::exception&)
	{
		return 0;
	}

	if (request_type == L"[genre select]" || request_type == L"[recent books]\n")
	{
		ifstream file(L"respond" + socket_id + L".txt", std::ios::trunc | std::ios::out | std::ios::binary);
		req = req.substr(1, req.length() - 3);
		Select(result, "Books", "*", L"", "");
		for (int i = 0; i < result.size(); i++)
		{

			wstring data = L"id="+ std::get<0>(result[i]) + L"title="+ std::get<1>(result[i]) + L"author="+ std::get<2>(result[i]) + L"genre="+std::get<3>(result[i]) + L"year="+
				std::get<4>(result[i]) + L"edition="+ std::get<5>(result[i]) + L"translator="+ std::get<6>(result[i]) + L"price="+ std::get<7>(result[i]) + L"publisher="+ std::get<8>(result[i]) + L"language="+
				std::get<9>(result[i]) + L"summery="+ std::get<10>(result[i]) + L"digital="+ std::get<11>(result[i]) + L"cover="+L"\n";
			std::string wstr_turned_to_str = std::wstring_convert<std::codecvt_utf8<wchar_t>>().to_bytes(data);
			file >> wstr_turned_to_str;
		}
		string end = "[[END]]";
		file >> end;
		file.close();
	}

	else if (request_type == L"[sign in]")
	{
		req = mssg.substr(mssg.find_first_of('-') + 1, mssg.length() - 2 - mssg.find_first_of('-'));
		wstring email = req.substr(req.find_first_of(':') + 1, req.find_first_of('|') - 1 - req.find_first_of(':'));
		wstring password = req.substr(req.find_last_of(':') + 1, req.length() - 1 - req.find_last_of(':'));
		vector<tuple< wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring, wstring>> result;
		result.clear();
		wstring cond = L" WHERE Username = '" + email + L"' AND Password = '" + password + L"'";
		Select_users(result, "users", "*",cond ,"");
		if (result.size() != 0)
		{
			std::wfstream file(L"respond" + socket_id + L".txt", std::ios::trunc | std::ios::out | std::ios::in);
			file << L"_[sign in]-signed in";
			file.close();
		}
		else
		{
			std::fstream file(L"respond" + socket_id + L".txt", std::ios::trunc | std::ios::out | std::ios::in);
			file << "_[sign in]-notsigned in";
			file.close();

		}
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

