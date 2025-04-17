#include "Doctor.h"
#include "Person.h"
#include "Patient.h"
#include <iostream>

Doctor::Doctor() {
    this->specialization = "";
    this->name = "";
    this->age = 0;
    this->gender = "";
    this->id = "";
}

Doctor::Doctor(const string& name,const int& age,const string& gender, const string&  id,const string& specialization){
    this->specialization = specialization;
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->id = id;
}

void Doctor::assignPatient(Patient* p) {
    assignedPatients.push_back(p);
}

void Doctor::displayInfo() {
    cout<<"\nDoctor Information:"<< endl;
    cout<< "Name: " << getName() << endl;
    cout<<"Age: "<<getAge()<<endl;
    cout<<"Doctor Id: "<<getId()<<endl;
    cout<< "Specialization: " << specialization << endl;
    cout<<"Assigned patients' Id: " ;
    for (auto el : assignedPatients) {
        cout << el->getId()<<" ";
    }
    cout<<endl;
}
