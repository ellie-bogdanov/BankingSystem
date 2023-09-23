#pragma once

#include <string>

class Customer
{
private:
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

};