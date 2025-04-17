#include "Patient.h"
#include <iostream>
#include "Medicine.h"
#include "Disease.h"
#include "Room.h"
using namespace std;
Patient::Patient(string name,int age,string gender,string id):Person(name,age,gender,id) {}
void Patient::addDisease(Disease d) {
    diseases.push_back(d);
}
void Patient::addMedicine(Medicine m) {
    prescriptions.push_back(m);
}
void Patient::assignRoom(const Room& r) {
    room = r;
}
int Patient::getRoomNumber() const {
    return room.getRoomNumber();
}
void Patient::displayInfo() {
    cout<<"\nPatient Info: "<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"Age: "<<getAge()<<endl;
    cout<<"Gender: "<<getGender()<<endl;
    cout<<"ID: "<<getId()<<endl;
    cout<<"Diseases: "<<endl;
    cout<<"Room Number: "<<room.getRoomNumber()<<endl;
    if(diseases.empty()){
        cout<<"No diseases recorded."<<endl;
    }else {
        for (Disease& d : diseases) {
            cout<<"-"<<d.getName()<<" ("<<(d.getIsContagious() ? "Contagious" : "Not Contagious")<<")"<<": "<<d.getDescription()<<endl;
        }
    }
    cout<<"Prescriptions: "<<endl;
    if (prescriptions.empty()) {
        cout<<"No medicines prescribed."<<endl;
    }else {
        for (Medicine& m : prescriptions) {
            cout<<"- "<<m.getName()<<" | Dosage: "<<m.getDosage()<<" | Instructions: "<<m.getInstructions()<<endl;
        }
    }
}