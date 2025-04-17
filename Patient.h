#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "Room.h"
#include "Person.h"
#include "Disease.h"
#include "Medicine.h"
#ifndef PATIENT_H
#define PATIENT_H
class Patient: public Person{
    vector <Disease> diseases;
    vector <Medicine> prescriptions;
    Room room;
public:
    Patient(string name,int age,string gender,string id);
    void addDisease(Disease d);
    void addMedicine(Medicine m);
    void assignRoom(const Room& r);
    int getRoomNumber() const;
    void displayInfo() override;
};
#endif //PATIENT_H