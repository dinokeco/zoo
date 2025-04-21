//
// Created by Dino Keco on 4/21/25.
//
#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name, std::string birth_date, std::string species)
    : name(name), birth_date(birth_date), species(species) {}


void Animal::setName(std::string name) {
    this->name = name;
}

std::string Animal::getName() const {
    return name;
}

void Animal::setBirthDate(std::string birth_date) {
    this->birth_date = birth_date;
}

std::string Animal::getBirthDate() const {
    return birth_date;
}

void Animal::setSpecies(std::string species) {
    this->species = species;
}

std::string Animal::getSpecies() const {
    return species;
}
void Animal::feedingSchedule() {
    // Implement the feeding schedule logic here
    // This is just a placeholder
    std::cout << "Feeding schedule for " << name << std::endl;
}

