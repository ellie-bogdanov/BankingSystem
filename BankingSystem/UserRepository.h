#pragma once

#include <vector>
#include "User.h"

class UserRepository
{
private:
	std::vector<User> mainBrachRepo;

public:
	UserRepository();

	~UserRepository();

	std::vector<User>& GetMainBranchRepository();

	void AddUser(const std::string& username, std::string password, const Account& account, std::vector<User>& repository);

	void PrintAllUsers(std::vector<User>& repository);

	User* FindUserByUsername(std::string& username, std::vector<User>& repository);
};
