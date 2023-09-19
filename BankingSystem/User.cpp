#include <iostream>

#include "HashPassword.h"
#include "User.h"





	User::User(int uId, std::string uUsername, std::string uPassword, int uBalance)
	{
		id = uId;
		username = uUsername;
		password = uPassword;
		HashPassword(password);
		std::cout << password;
		balance = uBalance;
		std::cout << balance;
	}

	
	
	User::~User()
	{
	}

	int User::GetId()
	{
		return id;
	}

	std::string User::GetUsername()
	{
		return username;
	}

