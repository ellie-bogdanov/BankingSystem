#pragma once

#include "UserRepository.h"
#include "HashPassword.h"


class AuthenticationService
{
private:
	UserRepository userRepository;

public:
	AuthenticationService(UserRepository userRepository);
	~AuthenticationService();

	bool login(std::string& username, std::string& password, std::vector<User>& repository);
};
