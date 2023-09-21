#include <iostream>
#include <vector>
#include "User.h"

class UserRepository
{
	
private:
	std::vector<User> mainBrachRepo;


public:
	UserRepository()
	{

	}
	~UserRepository(){}

	std::vector<User> *GetMainBranchRepository()
	{
		return &mainBrachRepo;
	}

	void AddUser(std::string& username, std::string& password, Balance& balance, std::vector<User>& repository)
	{
		
		size_t id = repository.size() + 1;
		repository.emplace_back(id, username, password, balance);

	}


	void PrintAllUsers(std::vector<User> &repository)
	{
		for(User& user : repository)
		{
			std::cout << user.GetUsername() << ", ";
		}
		std::cout << '\n';
	}

	User* FindUserByUsername(std::string& username, std::vector<User> &repository)
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
};