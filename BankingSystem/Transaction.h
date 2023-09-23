#pragma once

#include <iostream>
#include <vector>
#include "Account.h"

using Money = std::int_least16_t;

class Transaction
{
	Money transactionAmount;
	Account accountTo;

public:
	Transaction(const Account& accountTo, const Money& transactionAmount);

	~Transaction();

	void PrintTransactionInfo();


};

