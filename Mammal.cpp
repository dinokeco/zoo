//
// Created by Dino Keco on 4/21/25.
//
// implement mammal class based on mammal.h declaration

#include "Mammal.h"
#include <iostream>

Mammal::Mammal(std::string name, std::string birthDate, std::string species, std::string habitat):
    Animal(name, birthDate, species) {
    this->habitat = habitat;
}

std::string Mammal::getHabitat() const {
    return habitat;
}

void Mammal::setHabitat(std::string habitat) {
    this->habitat = habitat;
}

std::ostream& operator<<(std::ostream& os, const Mammal& mammal) {
    os << (Animal) mammal;
    os << "Habitat: " << mammal.getHabitat() << std::endl;
    return os;
}
