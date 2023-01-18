#include <fstream>
#include <iostream>

int main()
{
    // Use ofstream to create a new file in the project folder called "Sample.txt"
    std::ofstream outf{ "Sample.txt" };

    // If we couldn't open the output file stream for writing
    if (!outf)
    {
        // Print an error message and return 1 to indicate the program failed
        std::cout << "Uh oh, Sample.txt could not be opened for writing!\n";
        return 1;
    }

    // We'll write two lines into the "Sample.txt" file
    outf << "This is line 1\n";
    outf << "And this is line 2\n";

    // Print out a confirmation message
    std::cout << "Data successfully written to Sample.txt!" << std::endl;

    return 0;
}