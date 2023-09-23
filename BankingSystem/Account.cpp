#include "Account.h"
#include "Transaction.h"

Account::Account(size_t accountNumber, const Customer& customer, const Money& balance) : accountNumber(accountNumber), customer(customer), balance(balance)
{

}

Account::~Account()
{
	for (Transaction* transaction : transactionList)
	{
		delete transaction;
	}
}

const Customer& Account::GetCustomer()
{
	return customer;
}

const Money& Account::GetBalance()
{
	return balance;
}

size_t Account::GetAccountNumber()
{
	return accountNumber;
}

void Account::MoneyMovement(const Money& moneyToMove)
{
	balance += moneyToMove;
}

const std::vector<Transaction*>& Account::GetTransactionList()
{
	return transactionList;
}

void Account::ProccessTransaction(const Account& accountTo, const Money& transactionAmount)
{
	Transaction *transaction = new Transaction(accountTo, transactionAmount);
	transactionList.emplace_back(transaction);
	MoneyMovement(transactionAmount);
}

	
void Account::PrintAccountInfo()
{
	customer.PrintCustomerInfo();
	std::cout << "Account- account number: " << accountNumber << ", balance: " << balance << '\n';
	std::cout << "Transaction History: \n";

	for (Transaction *transaction : transactionList)
	{
		transaction->PrintTransactionInfo();
	}


}
