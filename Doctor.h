#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include <vector>
#include "Person.h"
#include "Patient.h"
using namespace std;

class Doctor : public Person {
private:
    string specialization;
    vector<Patient*> assignedPatients;

public:
    Doctor();
    Doctor(const string& name,const int& age,const string& gender, const string&  id,const string& specialization);

    void assignPatient(Patient* p);

    void displayInfo() override;
};

#endif // DOCTOR_H
