#include <iostream>

#include "HashPassword.h"
#include "User.h"





User::User(size_t id, const std::string& username, std::string password, Balance balance) : id(id), username(username), balance(balance)
{
	password = HashPassword(password);
	this->password = password;
	std::cout << password << '\n';
	std::cout << balance << '\n';
}

	
	
User::~User()
{
}

size_t User::GetId()
{
	return id;
}

const std::string& User::GetUsername()
{
	return username;
}

const std::string& User::GetPassword()
{
	return password;
}

const Balance& User::GetBalance()
{
	return balance;
}

void User::WithdrawlMoney(Balance amountToWithdraw)
{
	balance -= amountToWithdraw;
	transactionHistory.push_back(-1 * amountToWithdraw);
}

void User::DepositMoney(Balance amountToDeposit)
{
	balance += amountToDeposit;
	transactionHistory.push_back(amountToDeposit);
}

const std::vector<Balance>& User::GetTransactionHistory()
{
	return transactionHistory;
}