#pragma once
#include <vector>
#include <string>

struct databaseEntry {
	std::string login;
	std::string name;
	std::string password;
	bool isAdmin;


};
class Database
{
	/*Database();
	virtual ~Database()=0;
	virtual bool login()=0;
	virtual bool logout() = 0;
	virtual std::vector<databaseEntry>  searchByEmail(std::string) = 0;
	virtual std::vector<databaseEntry>  searchByName(std::string) = 0;
	virtual std::vector<databaseEntry>  searchByAdminStatus(bool) = 0;
	virtual bool deleteByAdminEmail(std::string) = 0;
	virtual bool deleteByAdminName(std::string) = 0;
	virtual bool deleteByAdminStatus(bool) = 0;*/
	virtual bool changePersonalData(std::string) = 0;
};

