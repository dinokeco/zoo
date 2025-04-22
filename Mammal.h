//
// Created by Dino Keco on 4/21/25.
//

#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H
#include "Animal.h"

class Mammal : public Animal {
private:
    std::string habitat;

public:
    Mammal(std::string name, std::string birthDate, std::string species, std::string habitat);

    void setHabitat(std::string habitat);

    std::string getHabitat() const;

    friend std::ostream& operator<<(std::ostream& os, const Mammal& mammal);

};
#endif //ZOO_MAMMAL_H
