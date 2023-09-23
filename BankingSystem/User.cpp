#include <iostream>

#include "HashPassword.h"
#include "User.h"





User::User(size_t id, const std::string& username, std::string& password, const Account& account) : id(id), username(username), account(account)
{
	password = HashPassword(password);
	this->password = password;
	std::cout << password << '\n';

}

	
	
User::~User()
{
}

size_t User::GetId()
{
	return id;
}

const std::string& User::GetUsername()
{
	return username;
}

const std::string& User::GetPassword()
{
	return password;
}


const Account& User::GetAccount()
{
	return account;
}



