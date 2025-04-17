// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string gender;
    string id;

public:
    virtual ~Person() = default;

    // Default constructor
    Person();

    // Parameterized constructor
    Person(const string& name,const int& age,const string& gender,const string& id);

    // Pure virtual function
    virtual void displayInfo() = 0;

    // Setters
    void setName(const string& name);
    void setAge(const int& age);
    void setGender(const string& gender);
    void setId( const string& id);

    // Getters
    string getName();
    int getAge();
    string getGender();
    string getId();
};

#endif // PERSON_H
