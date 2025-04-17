// Person.cpp
#include "Person.h"

// Default constructor
Person::Person() {
    this->name = "";
    this->age = 0;
    this->gender = "";
    this->id = "";
}

// Parameterized constructor
Person::Person(const string& name,const int& age,const string& gender,const string& id) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->gender = gender;
    this->id = id;
}

// Setter functions
void Person::setName(const string& name) {
    this->name = name;
}

void Person::setAge(const int& age) {
    this->age = age;
}

void Person::setGender(const string& gender) {
    this->gender = gender;
}

void Person::setId(const string& id) {
    this->id = id;
}

// Getter functions
string Person::getName() {
    return this->name;
}

int Person::getAge(){
    return this->age;
}

string Person::getGender() {
    return this->gender;
}

string Person::getId() {
    return this->id;
}
