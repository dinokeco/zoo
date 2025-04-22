#include <iostream>

#include "ZooDynamic.h"
#include "Bird.h"
#include "Mammal.h"

int main() {
    // Create an instance of the Animal class

    ZooDynamic zoo = ZooDynamic();

    zoo.addAnimal({"Bird1", "2025-04-21", "Bird", "Forest"});
    zoo.addAnimal(Mammal("Mammal1", "2025-04-21", "Mammal", "Forest"));
    zoo.addAnimal(Bird("Bird2", "2025-04-21", "Bird", "Forest"));

    std::cout << zoo[0] << std::endl;
    return 0;
}