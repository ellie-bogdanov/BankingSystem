#pragma once

#include <string>
#include <vector>
#include<memory>

class Customer
{
private:
	std::vector<size_t> accountsInPossesion;
	std::string name;
	std::string address;
	size_t id;

public:
	Customer(size_t id, const std::string& name, const std::string& address);

	~Customer();

	void PrintCustomerInfo();

	const std::string& GetName();

	const std::string& GetAddress();

	const size_t GetId();

	const std::vector<size_t> GetAccountsInPossesion();

	void addAccountToAccountsInPossesion(size_t accountNumber);

};