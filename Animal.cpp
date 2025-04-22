//
// Created by Dino Keco on 4/21/25.
//
#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name, std::string birth_date, std::string species)
    : name(name), birth_date(birth_date), species(species) {
}

Animal::Animal() {
    std::cout<<"Animal created"<<std::endl;
}

Animal::Animal(const Animal &a) {
    (*this).name = a.name;
    this->name = a.name;
    this->birth_date = a.birth_date;
    this->species = a.species;
    std::cout<<"Animal copied"<<std::endl;
}

Animal::Animal(std::initializer_list<std::string> attributes){
    this->name = attributes.begin()[0];
    this->birth_date = attributes.begin()[1];
    this->species = attributes.begin()[2];
}

/*
Animal::Animal(Animal &&a) {
    std::swap(this->name, a.name);
    std::swap(this->birth_date, a.birth_date);
    std::swap(this->species, a.species);
    std::cout<<"Animal moved"<<std::endl;
}*/



Animal::~Animal() {
    std::cout<<"Animal died"<<std::endl;
}

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

void Animal::makeSound() {
    std::cout<<"Abstract sound "<< std::endl;
}

std::ostream& operator<<(std::ostream& os, const Animal& animal) {
    os << "Name: " << animal.getName() << std::endl;
    os << "Birth Date: " << animal.getBirthDate() << std::endl;
    os << "Species: " << animal.getSpecies() << std::endl;
    return os;
}
