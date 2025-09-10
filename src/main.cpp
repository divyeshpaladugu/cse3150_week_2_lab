#include <iostream>
#include <string>
#include <parser.h>


int main() {
	std::string fullName;
	std::string email;

	std::cerr << "Enter your full name: ";
	std::getline(std::cin, fullName);
	
	std::cerr << "Enter your email: ";
	std::getline(std::cin, email);

	std::string* firstName = new std::string;
	std::string* lastName = new std::string;

	StringUtils::parseName(fullName, firstName, lastName);
	
	std::string username = StringUtils::getUsername(email);

	std::cout << "First Name: " << *firstName << "\n";
	std::cout << "Last Name: " << *lastName << "\n";
	std::cout << "Username: " << username << "\n";
	
	delete firstName;
	delete lastName;
	
	return 0;		
}
