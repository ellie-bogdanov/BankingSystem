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

	Account(size_t accountNumber, const Customer& customer, Money balance);

	~Account();

	void PrintAccountInfo();


	const Customer& GetCustomer();

	Money GetBalance();

	size_t GetAccountNumber();

	
	void MoneyMovement(Money moneyToMove);

	std::vector<Transaction*>* GetTransactionList();

	//void ProccessTransaction(const Account& accountTo, Money transactionAmount);

	void AddTransactionToList(Transaction* transaction);

};