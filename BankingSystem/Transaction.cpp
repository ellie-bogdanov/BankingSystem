#include "Transaction.h"
#include "Account.h"

Transaction::Transaction(Account* accountTo, Account* accountFrom,  Money transactionAmount) : accountTo(accountTo),
						accountFrom(accountFrom), transactionAmount(transactionAmount)
{

}

Transaction::~Transaction()
{

}

void Transaction::ProccessTransaction(std::vector<Transaction*>* accountToTransactionList, std::vector<Transaction*>* accountFromTransactionList)
{
	(*accountTo).MoneyMovement(transactionAmount);
	(*accountFrom).MoneyMovement(-transactionAmount);


	Transaction* transactionTo = new Transaction(accountTo, accountFrom, transactionAmount);
	Transaction* transactionFrom = new Transaction(accountTo, accountFrom, -transactionAmount);

	(*accountToTransactionList).emplace_back(transactionTo);
	(*accountFromTransactionList).emplace_back(transactionFrom);
	
}


void Transaction::PrintTransactionInfo()
{
	Customer* customerTo = accountTo->GetCustomer();
	customerTo->PrintCustomerInfo();
	std::cout << "Transaction Ammount: " << transactionAmount << '\n';
}





