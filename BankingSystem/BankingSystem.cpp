
#include <iostream>
#include "UserRepository.h"

#include<iostream>
#include "Account.h"
#include "Transaction.h"

int main()
{
    UserRepository userRepository;
    std::vector<User>& mainBrachRepo = userRepository.GetMainBranchRepository();

    Money startingMoney = 1000;

    Customer customerEllie(1, "Ellie", "Ashkelon");

    

    Account* accountEllie = new Account(1, customerEllie, startingMoney);

    /*************************************************************/

    Customer customerCoral(2, "Coral", "Holon");

    Account* accountCoral = new Account(2, customerCoral, startingMoney);

    /*************************************************************/

    const std::string& usernameEllie = "Ellie";
    std::string passwordEllie = "asd";

    const std::string& usernameCoral = "Coral";
    std::string passwordCoral = "dsa";

    userRepository.AddUser(usernameEllie, passwordEllie, (*accountEllie), mainBrachRepo);
    userRepository.AddUser(usernameCoral, passwordCoral, (*accountCoral), mainBrachRepo);

    Transaction transaction(accountEllie, accountCoral, 500);

    std::vector<Transaction*>* transactionListTo = (*accountEllie).GetTransactionList();
    std::vector<Transaction*>* transactionListFrom = (*accountCoral).GetTransactionList();
    
    transaction.ProccessTransaction(transactionListTo, transactionListFrom);

    (*accountEllie).PrintAccountInfo();

    (*accountCoral).PrintAccountInfo();

    userRepository.PrintAllUsers(mainBrachRepo);



    

    return 0;
}


