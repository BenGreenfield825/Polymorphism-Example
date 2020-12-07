//
// Created by Ben on 12/7/2020.
//

#ifndef POLYMORPHISMEXAMPLE_ANIMAL_H
#define POLYMORPHISMEXAMPLE_ANIMAL_H

#include <string>

using namespace std;

class Animal {
private:    //accessible only to this class

protected:  //accessible only to this class and sub classes
    string name;
public: //accessible to the outside
    Animal(string name);    //default constructor requires a name
    string getName() {return name;}
    virtual ~Animal();
};

Animal::Animal(string name) {
    this->name = name;
}
Animal::~Animal() {
    cout << "Destructor" << endl;
}

#endif //POLYMORPHISMEXAMPLE_ANIMAL_H
