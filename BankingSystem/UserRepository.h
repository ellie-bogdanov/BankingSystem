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

	std::vector<User>* GetMainBranchRepository();

	void AddUser(std::string& username, std::string& password, Balance& balance, std::vector<User>& repository);

	void PrintAllUsers(std::vector<User>& repository);

	User* FindUserByUsername(std::string& username, std::vector<User>& repository);
};
