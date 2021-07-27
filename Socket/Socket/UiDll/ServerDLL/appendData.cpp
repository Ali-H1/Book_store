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
		wstring end = L"[[End]]", id_ = L"id=", title_ = L"title=", author_ = L"author=", genre_ = L"genre=", year_ = L"year=",
			edition_ = L"edition=", translator_ = L"translator=", price_ = L"price=", publisher_ = L"publisher=", language_ = L"language=",
			summery_ = L"summery=", digital_ = L"digital=", cover_ = L"cover=";
		int num_of_results = 0;
		for (int i = 0; i < req.length() - 6; i++)
		{
			if (req[i] == '[' && req[i + 1] == '[' && req[i + 2] == 'E' && req[i + 3] == 'n' && req[i + 4] == 'd' && req[i + 5] == ']' && req[i + 6] == ']')
				num_of_results++;
		}
		for (int i = 0; i < num_of_results; i++)
		{
			id = req.substr(req.find(id_) + 3, req.find(title_) - req.find(id_) - 4);
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

