#include "AuthenticationService.h"



bool AuthenticationService::login(std::string& username, std::string& password, std::vector<User>& repository)
{
	User* user = userRepository.FindUserByUsername(username, repository);
	if (user == nullptr)
	{
		return false;
	}
	password = HashPassword(password);


	if ((*user).GetPassword() == password)
	{
		return true;
	}

	return false;

}

AuthenticationService::AuthenticationService(UserRepository userRepository) : userRepository(userRepository)
{

}

AuthenticationService::~AuthenticationService()
{
}


