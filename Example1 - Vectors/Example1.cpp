#include <iostream>
#include <vector>

int main()
{
	// Initialise a new integer vector collection with 5 whole numbers
	std::vector<int> NumberCollection = { 1, 2, 3, 4, 5 };

	// Use the .push_back() function to add 5 more values on to the end of our vector
	NumberCollection.push_back(6);
	NumberCollection.push_back(7);
	NumberCollection.push_back(8);
	NumberCollection.push_back(9);
	NumberCollection.push_back(10);

	// The .pop_back() function removed the last element from our vector
	NumberCollection.pop_back();
	
	// Assign a value of 99 to element 5 in the vector
	NumberCollection[5] = 99;
	std::cout << "Value at Index 5: " << NumberCollection[5] << std::endl << std::endl;

	// Use the .size() function to determine the current number of elements in the vector
	const int NumOfElementsInArray = NumberCollection.size();

	// Use the value returned from the .size() function to iterate over the array and print each value
	for (int i = 0; i < NumOfElementsInArray; i++)
	{
		std::cout << "Value at Index " << i << ": " << NumberCollection[i] << std::endl;
	}
}