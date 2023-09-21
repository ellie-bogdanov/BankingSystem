
#include <iostream>
#include "UserRepository.cpp"
#include <vector>

int main()
{
    UserRepository userRepo;

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

    std::string name = "asdasd";
    User* user = userRepo.FindUserByUsername(name, *mainBranchRepo);

    std::cout << user->GetUsername();


    return 0;
}


