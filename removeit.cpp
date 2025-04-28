// Create a set of methods used to demonstrate the CRUD on the
// Zoo as being a vector of Animals
void ZooDynamic::createAnimal(const Animal &a) {
    this->addAnimal(a);
}

void ZooDynamic::readAnimal(int index) {
    std::cout << this->getAnimal(index) << std::endl;
}

void ZooDynamic::updateAnimal(int index, const Animal &a) {
    this->getAnimal(index) = a;
}

void ZooDynamic::deleteAnimal(int index) {
    for (int i = index; i < this->counter - 1; i++) {
        this->getAnimal(i) = this->getAnimal(i + 1);
    }
    this->counter--;
}

void ZooDynamic::printAllAnimals() const {
    for (int i = 0; i < this->counter; i++) {
        std::cout << this->getAnimal(i) << std::endl;
    }
}

// Please give me a set of methods that I need in order to
// perform CRUD operations on my Zoo that is a vector of Animals

// Create a set of methods used to demonstrate the CRUD on the
// Zoo as being a vector of Animals
void ZooDynamic::createAnimal(const Animal &a) {
    this->addAnimal(a);
}

void ZooDynamic::readAnimal(int index) {
    std::cout << this->getAnimal(index) << std::endl;
}

void ZooDynamic::updateAnimal(int index, const Animal &a) {
    this->getAnimal(index) = a;
}

void ZooDynamic::deleteAnimal(int index) {
    for (int i = index; i < this->counter - 1; i++) {
        this->getAnimal(i) = this->getAnimal(i + 1);
    }
    this->counter--;
}

void ZooDynamic::printAllAnimals() const {
    for (int i = 0; i < this->counter; i++) {
        std::cout << this->getAnimal(i) << std::endl;
    }
}

// Please give me a set of methods that I need in order to
