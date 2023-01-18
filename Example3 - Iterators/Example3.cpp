// Includes
#include <iostream>
#include <vector>

// Function Declarations
void IterateVector();
void PrintVector(std::vector<int>& VectorToPrint);

int main()
{
    // Call to function which uses iterators to insert, remove and access data in an std::vector
    IterateVector();

    return 0;
}

void IterateVector()
{
    // Initialise a new vector with 3 integer values
    std::vector<int> VectorCollection = { 101, 202, 303 };

    // Create an iterator to iterate over the collection using a for loop
    for (std::vector<int>::iterator iter = VectorCollection.begin(); iter != VectorCollection.end(); ++iter)
    {
        // If the current element in the vector (the one the iterator points to) is the initial emenent in the vector then override that value with '99'
        if (iter == VectorCollection.begin()) 
        {
            iter = VectorCollection.insert(iter, 99);            
        }
    }

    // Print out the current values held in the vector
    PrintVector(VectorCollection);

    // Once again iterate over the collection
    for (std::vector<int>::iterator iter = VectorCollection.begin(); iter != VectorCollection.end(); ++iter)
    {
        // If the value of the current element in the iterator is equal to 101, erase it
        if (*iter == 101) 
        {
            iter = VectorCollection.erase(iter);            
        }
    }

    // Print out the current values held in the vector
    PrintVector(VectorCollection);
}

void PrintVector(std::vector<int>& VectorToPrint)
{
    // Use an iterator to loop over hte vector and print out the value in each element
    for (std::vector<int>::iterator iter = VectorToPrint.begin(); iter != VectorToPrint.end(); ++iter)
    {
        std::cout << *iter << " ";
    }

    // Print a new line 
    std::cout << std::endl;
}