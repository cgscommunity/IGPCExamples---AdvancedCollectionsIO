#include <iostream>
#include <string>

int main()
{
	// Create two strings, one for first name another for second name
	std::string FirstName = "Peter";
	std::string SecondName = "Parker";

	// Create a third string by appending the two strings together
	std::string FullName;
	FullName.append(FirstName);
	FullName.append(SecondName);

	// Insert a middle name (with spaces) at index 5 of the string
	FullName.insert(5, " Benjamin ");

	// Print out the FullName string
	std::cout << "Your full name is: " << FullName << std::endl;

	return 0;
}