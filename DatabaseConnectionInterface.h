#pragma once
#include <string>
#include "Database.h"
class DatabaseConnectionInterface
{
	virtual bool login(std::string dbUsername, std::string password) = 0;
	virtual bool logout(std::string dbUsername)=0;
	virtual bool fetchEntry(std::string dbUserName, std::string email,databaseEntry &out)=0;


};

