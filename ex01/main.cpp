
#include "iter.hpp"

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};

	// Testing with int array
	std::cout << "Int Array: ";
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	// Testing with double array
	std::cout << "Double Array: ";
	iter(doubleArray, 5, printElement<double>);
	std::cout << std::endl;

	// Testing with char array
	std::cout << "Char Array: ";
	iter(charArray, 5, printElement<char>);
	std::cout << std::endl;

	return 0;
}
