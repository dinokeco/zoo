//
// Created by Dino Keco on 4/21/25.
//
// implement the Bird class

#include "Bird.h"
#include <iostream>

Bird::Bird(std::string name, std::string birthDate, std::string species, std::string nestingSite) : Animal(name, birthDate, species) {
    this->setNestingSite(nestingSite);
}

void Bird::setNestingSite(std::string nestingSite) {
    this->nestingSite = nestingSite;
}

std::string Bird::getNestingSite() const{
    return this->nestingSite;
}

void Bird::makeSound() {
    std::cout<<"KVA KVA KVA"<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Bird &bird) {
    os << (Animal)bird;
    os << "Nesting Site: " << bird.nestingSite << std::endl;
    return os;
}