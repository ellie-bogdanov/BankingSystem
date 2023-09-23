#include "Transaction.h"
#include "Account.h"

Transaction::Transaction(const Account& accountTo, const Money& transactionAmount) : accountTo(accountTo), transactionAmount(transactionAmount)
{
	
}

Transaction::~Transaction()
{

}

void Transaction::PrintTransactionInfo()
{
	Customer customerTo = accountTo.GetCustomer();
	customerTo.PrintCustomerInfo();
	std::cout << "Transaction Ammount: " << transactionAmount << '\n';
}





