#include "Customer.h"
#include <iostream>


Customer::Customer(size_t id, const std::string& name, const std::string& address) : id(id), name(name), address(address)
{

}

Customer::~Customer()
{
}

void Customer::PrintCustomerInfo()
{
	std::cout << "Costumer info - id : " << id << ", name: " << name << ", address: " << address << '\n';
	std::cout << "Accounts in Possesion: ";
	std::cout << '#' << accountsInPossesion.size() << '\n';
}

const std::string& Customer::GetAddress()
{
	return address;
}

const std::string& Customer::GetName()
{
	return name;
}

const size_t Customer::GetId()
{
	return id;
}

const std::vector<size_t> Customer::GetAccountsInPossesion()
{
	return accountsInPossesion;
}

void Customer::addAccountToAccountsInPossesion(size_t accountNumber)
{
	accountsInPossesion.emplace_back(accountNumber);
}
