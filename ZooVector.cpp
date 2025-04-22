//
// Created by Dino Keco on 4/21/25.
//

#include "ZooVector.h"


ZooVector::ZooVector() {
    this->animals = std::vector<Animal>();
}

void ZooVector::addAnimal(Animal a) {
    this->animals.push_back(a);
}

Animal &ZooVector::getAnimal(int index) {
    return this->animals.at(index);
    //return this->animals[index];
}

Animal ZooVector::operator[](int index) const{
    return this->getAnimal(index);
}
Animal& ZooVector::operator[](int index){
    return this->getAnimal(index);
}


Animal ZooVector::getAnimal(int index) const {
    return this->animals.at(index);
}