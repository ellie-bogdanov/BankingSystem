
#include <iostream>
#include "UserRepository.cpp"
#include <vector>

int main()
{
    UserRepository repo;
    
    std::string username;
    std::string password;


    std::cout << "Enter Your username: " << '\n';
    std::cin >> username;

    std::cout << "Enter Your password: " << '\n';
    std::cin >> password;

    repo.AddUser(username, password);

    /*std::vector<unsigned char> hash(picosha2::k_digest_size);
    picosha2::hash256(password.begin(), password.end(), hash.begin(), hash.end());

    std::string hex_str = picosha2::bytes_to_hex_string(hash.begin(), hash.end());



    std::cout << hex_str;*/



    return 0;
}


