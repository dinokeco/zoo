//
// Created by Dino Keco on 4/21/25.
//
#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include "Animal.h"

class Bird : public Animal {
private:
    std::string nestingSite; // Updated attribute name
public:
    Bird(std::string name, std::string birthDate, std::string species, std::string nestingSite); // Updated constructor parameter
    void setNestingSite(std::string nestingSite); // Updated setter method
    std::string getNestingSite() const; // Updated getter method
    friend std::ostream& operator<<(std::ostream& os, const Bird& bird);

    void makeSound();
};

#endif //ZOO_BIRD_H