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

