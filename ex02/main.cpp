#include "Array.hpp"

int main()
{
	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;
	// Creation d'un tableau d'une taille specifique
	size_t size = 5;
	Array<int> specificSizeArray(size);
	std::cout << "Specific size array size: " << specificSizeArray.size() << std::endl;
	// Acces aux elements du tableau
	try
	{
		for (size_t i = 0; i < size; ++i)
		{
			specificSizeArray[i] = i + 1;
			std::cout << "Element at index " << i << ": " << specificSizeArray[i] << std::endl;
		}

		// Tentative d'acces a un element en dehors des limites
		std::cout << "Attempting to access out-of-range element..." << std::endl;
		specificSizeArray[size] = 10; // Doit lancer une exception
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
