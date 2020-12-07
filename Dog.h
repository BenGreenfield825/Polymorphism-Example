//
// Created by Ben on 12/7/2020.
//

#ifndef POLYMORPHISMEXAMPLE_DOG_H
#define POLYMORPHISMEXAMPLE_DOG_H

#include "Animal.h"

using namespace std;

class Dog : public Animal {
private:
    string breed;
public:
    Dog(string name, string breed);
    ~Dog();
};

Dog::Dog(string name, string breed): Animal(name) {
    this->breed = breed;
}
Dog::~Dog() {
    cout << "Dog destructor" << endl;
}

#endif //POLYMORPHISMEXAMPLE_DOG_H
