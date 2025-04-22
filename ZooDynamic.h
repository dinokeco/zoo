//
// Created by Dino Keco on 4/21/25.
//

#ifndef ZOO_ZOODYNAMIC_H
#define ZOO_ZOODYNAMIC_H

#include "Animal.h"

class ZooDynamic{

    Animal** animals = nullptr;
    int counter = 0;
public:

    ZooDynamic(int capacity=10);
    ~ZooDynamic();
    void addAnimal(const Animal &a);
    Animal getAnimal(int index) const;
    Animal& getAnimal(int index);

    Animal operator[](int index) const;
    Animal& operator[](int index);

    friend std::ostream& operator<<(std::ostream& os, const ZooDynamic& zoo);
};

#endif //ZOO_ZOODYNAMIC_H
