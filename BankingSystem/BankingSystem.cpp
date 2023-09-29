
#include <iostream>
#include "UserRepository.h"
#include "AuthenticationService.h"

#include<iostream>
#include "Account.h"
#include "Transaction.h"

int main()
{
    UserRepository userRepository;
    std::vector<User>& mainBrachRepo = userRepository.GetMainBranchRepository();

    Money startingMoney = 1000;

    Customer customerEllie(1, "Ellie", "Ashkelon");

    Customer* pCustomerEllie = &customerEllie;

    Account* accountEllie1 = new Account(1, pCustomerEllie, startingMoney);
    Account* accountEllie2 = new Account(2, pCustomerEllie, startingMoney);
    Account* accountEllie3 = new Account(3, pCustomerEllie, startingMoney);

    /*************************************************************/

    Customer customerCoral(2, "Coral", "Holon");

    Customer* pCustomerCoral = &customerCoral;

    Account* accountCoral = new Account(4, pCustomerCoral, startingMoney);

    /*************************************************************/

    const std::string& usernameEllie = "Ellie";
    std::string passwordEllie = "asd";

    const std::string& usernameCoral = "Coral";
    std::string passwordCoral = "dsa";

    userRepository.AddUser(usernameEllie, passwordEllie, (*accountEllie1), mainBrachRepo);
    userRepository.AddUser(usernameCoral, passwordCoral, (*accountCoral), mainBrachRepo);

    AuthenticationService authService(userRepository);

    std::string usernameForAuth;
    std::string passwordForAuth;
    std::cout << "Enter your username: ";
    std::cin >> usernameForAuth;
    std::cout << "Enter your password: ";
    std::cin >> passwordForAuth;

    if (authService.login(usernameForAuth, passwordForAuth, mainBrachRepo))
    {
        std::cout << "Welcome to the bank page.";
    }
    else
    {
        std::cout << "inccorect username or password.";
        return 0;
    }

    Transaction transaction(accountEllie1, accountCoral, 500);

    std::vector<Transaction*>* transactionListTo = (*accountEllie1).GetTransactionList();
    std::vector<Transaction*>* transactionListFrom = (*accountCoral).GetTransactionList();
    
    transaction.ProccessTransaction(transactionListTo, transactionListFrom);

    std::vector<size_t> customerEllieAccountList = customerEllie.GetAccountsInPossesion();

    (*accountEllie1).PrintAccountInfo();

    (*accountCoral).PrintAccountInfo();


    userRepository.PrintAllUsers(mainBrachRepo);



    

    return 0;
}


