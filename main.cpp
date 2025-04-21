#include <iostream>
#include "Animal.h"

int main() {
    // Create an instance of the Animal class
    Animal myAnimal("Fluffy", "2020-05-15", "Cat");

    // Print out all attributes
    std::cout << "Name: " << myAnimal.getName() << std::endl;
    std::cout << "Birth Date: " << myAnimal.getBirthDate() << std::endl;
    std::cout << "Species: " << myAnimal.getSpecies() << std::endl;

    return 0;
}