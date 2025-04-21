//
// Created by Dino Keco on 4/21/25.
//
#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <string>

class Animal {

    std::string name;
    std::string birth_date;
    std::string species;
public:
    Animal(std::string name, std::string birthDate, std::string species);

    void setName(std::string name);
    std::string getName() const;

    void setBirthDate(std::string birthDate);
    std::string getBirthDate() const;

    void setSpecies(std::string species);
    std::string getSpecies() const;

    void feedingSchedule();
};

#endif //ZOO_ANIMAL_H
