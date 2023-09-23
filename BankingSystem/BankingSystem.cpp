
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

    

    Account accountEllie(1, customerEllie, startingMoney);

    /*************************************************************/

    Customer customerCoral(2, "Coral", "Holon");

    Account accountCoral(2, customerCoral, startingMoney);

    /*************************************************************/

    const std::string& usernameEllie = "Ellie";
    std::string passwordEllie = "asd";

    const std::string& usernameCoral = "Coral";
    std::string passwordCoral = "dsa";

    userRepository.AddUser(usernameEllie, passwordEllie, accountEllie, mainBrachRepo);
    userRepository.AddUser(usernameCoral, passwordCoral, accountCoral, mainBrachRepo);

    accountEllie.ProccessTransaction(accountCoral, 500);
    accountCoral.ProccessTransaction(accountEllie, -500);

    accountEllie.PrintAccountInfo();

    accountCoral.PrintAccountInfo();

    userRepository.PrintAllUsers(mainBrachRepo);



    

    return 0;
}


