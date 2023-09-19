#include <iostream>
#include <vector>
#include "User.h"

class UserRepository
{
private:
	std::vector<User> userRepo;


public:
	UserRepository()
	{

	}
	~UserRepository(){}

	void AddUser(std::string& username, std::string& password, int& balance)
	{
		
		int id = userRepo.size() + 1;
		User user(id, username, password, balance);
		userRepo.push_back(user);

	}

	void AddUser(std::string& username, std::string password)
	{

		int id = userRepo.size() + 1;
		User user(id, username, password, 0);
		userRepo.push_back(user);

	}

	void PrintAllUsers()
	{
		for(User user : userRepo)
		{
			std::cout << user.GetUsername() << ", ";
		}
		std::cout << '\n';
	}

	User* FindUserByUsername(std::string username)
	{
		for (User user : userRepo)
		{
			if (user.GetUsername() == username)
			{
				User* p_user = &user;
				return p_user;
			}
		}

		return NULL;
	}
};