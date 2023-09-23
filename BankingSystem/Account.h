#pragma once

#include "Customer.h"
#include <vector>

class Transaction;

using Money = std::int_least16_t;

class Account
{
private:
	Customer customer;
	Money balance;
	size_t accountNumber;
	std::vector<Transaction*> transactionList;



public:

	Account(size_t accountNumber, const Customer& customer, const Money& balance);

	~Account();

	void PrintAccountInfo();


	const Customer& GetCustomer();

	const Money& GetBalance();

	size_t GetAccountNumber();

	void MoneyMovement(const Money& moneyToMove);

	const std::vector<Transaction*>& GetTransactionList();

	void ProccessTransaction(const Account& accountTo, const Money& transactionAmount);

};