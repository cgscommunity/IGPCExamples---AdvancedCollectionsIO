#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // Use ifstream to open the "Sample.txt" file
    std::ifstream inf{ "Sample.txt" };

    // If we couldn't open the input file stream for reading
    if (!inf)
    {
        // Print an error message and exit with a code 1 error
        std::cout << "Uh oh, Sample.txt could not be opened for reading!\n";
        return 1;
    }

    // While there is data to read in the file
    while (inf)
    {
        // Create a new string variable
        std::string strInput;

        // Get the current line of text
        std::getline(inf, strInput);

        // Print the text to the console
        std::cout << strInput << '\n';
    }

    return 0;
}