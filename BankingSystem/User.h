#pragma once

#include <string>
#include <vector>

using Balance = std::int_least16_t;
class User
{
	

private:
	size_t id;
	std::string username;
	std::string password;
	Balance balance;
	std::vector<Balance> transactionHistory;

public:
	
	User(size_t id, const std::string& username, std::string password, Balance balance);


	~User();

	size_t GetId();

	const std::string& GetUsername();

	const std::string& GetPassword();

	const Balance& GetBalance();

	void WithdrawlMoney(Balance amountToWithdraw);

	void DepositMoney(Balance amountToDeposit);

	const std::vector<Balance>& GetTransactionHistory();
};
