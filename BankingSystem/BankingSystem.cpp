
#include <iostream>
#include "UserRepository.h"
#include "AuthenticationService.h"
#include <vector>

int main()
{
    UserRepository userRepo;
    AuthenticationService authService(userRepo);

    std::vector<User>* mainBranchRepo = userRepo.GetMainBranchRepository();
    
    std::string username;
    std::string password;


    std::cout << "Enter Your username: " << '\n';
    std::cin >> username;

    std::cout << "Enter Your password: " << '\n';
    std::cin >> password;

    Balance balance = 500;
    userRepo.AddUser(username, password, balance, *mainBranchRepo);

    userRepo.PrintAllUsers(*mainBranchRepo);

    std::string loginUsername;
    std::string loginPassword;

    std::cout << "Enter Your username: " << '\n';
    std::cin >> loginUsername;

    std::cout << "Enter Your password: " << '\n';
    std::cin >> loginPassword;
    User* user;
    bool isLoggedIn = authService.login(loginUsername, loginPassword, *mainBranchRepo);
    if (isLoggedIn)
    {
        user = userRepo.FindUserByUsername(loginUsername, *mainBranchRepo);
    }
    else
    {
        return 0;
    }

    Balance moneyToWithdraw = 230;
    Balance moneyToDeposit = 1462;
    (*user).withdrawlMoney(moneyToWithdraw);
    (*user).depositMoney(moneyToDeposit);

    std::cout << (*user).GetBalance();

    


    return 0;
}


