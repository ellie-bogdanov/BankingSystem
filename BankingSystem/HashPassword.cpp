#include "HashPassword.h"


std::string HashPassword(std::string password)
{
	std::vector<unsigned char> hash(picosha2::k_digest_size);
	picosha2::hash256(password.begin(), password.end(), hash.begin(), hash.end());

	password = picosha2::bytes_to_hex_string(hash.begin(), hash.end());

	return password;
}