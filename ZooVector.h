//
// Created by Dino Keco on 4/21/25.
//

#ifndef ZOO_ZOOVECTOR_H
#define ZOO_ZOOVECTOR_H

#include <vector>
#include "Animal.h"

class ZooVector {
    std::vector<Animal> animals;

public:
    ZooVector();
    void addAnimal(Animal a);
    Animal getAnimal(int index) const;
    Animal& getAnimal(int index);

    Animal operator[](int index) const;
    Animal& operator[](int index);

    friend std::ostream& operator<<(std::ostream& os, const ZooVector& zoo);
};

#endif //ZOO_ZOOVECTOR_H
