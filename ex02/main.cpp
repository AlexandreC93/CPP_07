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




// Classe Person
// class Person {
// private:
//     std::string name;
//     int age;

// public:
//     Person(std::string n = "Unknown", int a = 0) : name(n), age(a) {}
    
//     Person(const Person& p) : name(p.name), age(p.age) {}

//     Person& operator=(const Person& p) {
//         if (this != &p) {
//             name = p.name;
//             age = p.age;
//         }
//         return *this;
//     }

//     void introduce() const {
//         std::cout << "My name is " << name << " and I am " << age << " years old." << std::endl;
//     }
// };

// int main() {
//     Array<Person> people(3);

//     people[0] = Person("Alice", 25);
//     people[1] = Person("Bob", 30);
//     people[2] = Person("Charlie", 35);

//     for (size_t i = 0; i < people.size(); ++i) {
//         people[i].introduce();
//     }

//     return 0;
// }