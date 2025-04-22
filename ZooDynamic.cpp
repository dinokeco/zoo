//
// Created by Dino Keco on 4/21/25.
//

#include "ZooDynamic.h"

ZooDynamic::ZooDynamic(int capacity) {
    this->animals = new Animal[capacity];
    this->counter = 0;
}

ZooDynamic::~ZooDynamic(){
    delete[] this->animals;
}

void ZooDynamic::addAnimal(const Animal &a) {
    this->animals[counter++] = a;
}

Animal &ZooDynamic::getAnimal(int index) {
    return this->animals[index];
}

Animal& ZooDynamic::operator[](int index){
    return this->getAnimal(index);
}


Animal ZooDynamic::operator[](int index) const{
    return this->getAnimal(index);
}

Animal ZooDynamic::getAnimal(int index) const {
    return this->animals[index];
}