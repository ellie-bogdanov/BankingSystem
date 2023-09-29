#pragma once

#include <string>
#include <vector>
#include "Account.h"


class User
{
	

private:
	size_t id;
	std::string username;
	std::string password;
	Account account;


public:
	
	User(size_t id, const std::string& username, std::string& password, const Account& account);




	~User();

	size_t GetId();

	const std::string& GetUsername();

	const std::string& GetPassword();

	const Account& GetAccount();

};
