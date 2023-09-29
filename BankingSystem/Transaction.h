#pragma once

#include <iostream>
#include <vector>
#include "Account.h"

using Money = std::int_least16_t;

class Transaction
{
	Money transactionAmount;
	Account* accountTo;
	Account* accountFrom;

public:
	Transaction(Account* accountTo, Account* accountFrom, Money transactionAmount);

	~Transaction();

	void ProccessTransaction(std::vector<Transaction*>* accountToTransactionList, std::vector<Transaction*>* accountFromTransactionList);

	void PrintTransactionInfo();


};

