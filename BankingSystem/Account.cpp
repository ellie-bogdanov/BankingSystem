#include "Account.h"
#include "Transaction.h"

Account::Account(size_t accountNumber, Customer* customer, Money balance) : accountNumber(accountNumber), customer(customer), balance(balance)
{
	
	customer->addAccountToAccountsInPossesion(accountNumber);
	std::vector<size_t> accountNumbers = customer->GetAccountsInPossesion();
}

Account::~Account()
{
	for (Transaction* transaction : transactionList)
	{
		delete transaction;
	}

}

Customer* Account::GetCustomer()
{
	return customer;
}

Money Account::GetBalance()
{
	return balance;
}

size_t Account::GetAccountNumber()
{
	return accountNumber;
}

void Account::MoneyMovement(Money moneyToMove)
{
	balance += moneyToMove;
}

std::vector<Transaction*>* Account::GetTransactionList()
{
	return &transactionList;
}

/*void Account::ProccessTransaction(const Account& accountTo, Money transactionAmount)
{
	Transaction *transaction = new Transaction(accountTo, transactionAmount);
	transactionList.emplace_back(transaction);
	MoneyMovement(transactionAmount);
}*/

void Account::AddTransactionToList(Transaction* transaction)
{
	transactionList.emplace_back(transaction);
}
	
void Account::PrintAccountInfo()
{
	customer->PrintCustomerInfo();
	std::cout << "Account- account number: " << accountNumber << ", balance: " << balance << '\n';
	std::cout << "Transaction History: \n";

	for (Transaction *transaction : transactionList)
	{
		transaction->PrintTransactionInfo();
	}


}
