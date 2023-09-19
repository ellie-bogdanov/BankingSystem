#pragma once

#include <string>

class User
{

private:
	int id;
	std::string username;
	std::string password;
	std::string balance;

public:
	User(int id, std::string username, std::string password, int balance);

	~User();

	int GetId();

	std::string GetUsername();
};
