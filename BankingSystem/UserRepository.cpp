#include <iostream>
#include "UserRepository.h"


UserRepository::UserRepository()
{

}
UserRepository::~UserRepository(){}

std::vector<User>& UserRepository::GetMainBranchRepository()
{
	return mainBrachRepo;
}





void UserRepository::AddUser(const std::string& username, std::string password, const Account& account, std::vector<User>& repository)
{
		
	size_t id = repository.size() + 1;
	repository.emplace_back(id, username, password, account);

}


void UserRepository::PrintAllUsers(std::vector<User>& repository)
{
	for(User& user : repository)
	{
		std::cout << user.GetUsername() << ", ";
	}
	std::cout << '\n';
}

User* UserRepository::FindUserByUsername(std::string& username, std::vector<User>& repository)
{
	for (User &user : repository)
	{
		if (user.GetUsername() == username)
		{
			return &user;
		}
	}

	return nullptr;
}
