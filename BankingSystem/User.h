#pragma once

#include <string>
using Balance = std::int_least16_t;
class User
{
	

private:
	size_t id;
	std::string username;
	std::string password;
	Balance balance;

public:
	
	User(size_t id, const std::string& username, std::string password, Balance balance);


	~User();

	size_t GetId();

	const std::string& GetUsername();
};
