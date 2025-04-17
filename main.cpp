#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
#include "Patient.h"
#include "Doctor.h"
#include "Disease.h"
#include "Medicine.h"
#include "Record.h"
#include "Room.h"
using namespace std;

int main() {
    Record<Person*> hospitalRecords;

    Doctor* doc1 = new Doctor("Dr. Ahmad Aliyev", 45,"Male","D001", "Infectious Diseases / Internal Medicine");
    Doctor* doc2 = new Doctor("Dr. Durdona Tohirova",38,"Female","D002","General Medicine / Pulmonology");
    Doctor* doc3 = new Doctor("Dr. Farruh Yusupov",50,"Male","D003","Internal Medicine / General Practitioner");
    Doctor* doc4 = new Doctor("Dr. Feruza Hamidova",42,"Female","D004","Gastroenterology / Rheumatology / Pulmonology");
    Doctor* doc5 = new Doctor("Dr. Ibrohim Islomov",47,"Male","D005","Hepatology / Pulmonology");


    Patient* p1 = new Patient("Hamid Jasurov", 30, "Male", "P001");
    Patient* p2 = new Patient("Nargiza Xusanova", 25, "Female", "P002");
    Patient* p3 = new Patient("Rustam Sobirov", 35, "Male", "P003");
    Patient* p4 = new Patient("Nilufar Nodirova", 28, "Female", "P004");
    Patient* p5 = new Patient("Oybek Qurbonov", 40, "Male", "P005");

    Disease flu("Flu", "Viral infection with high fever", true);
    Disease diabetes("Diabetes", "Chronic high blood sugar", false);
    Disease pneumonia("Pneumonia", "Inflammation of the lungs", true);
    Disease hypertension("Hypertension", "High blood pressure", false);
    Disease gastritis("Gastritis", "Inflammation of the stomach lining", false);
    Disease bronchitis("Bronchitis", "Inflammation of the bronchi", true);
    Disease allergy("Allergy", "Sensitivity to external factors", false);
    Disease arthrits("Arthritis", "Inflammation of the joints", false);
    Disease hepatits("Hepatitis", "Inflammation of the liver", true);
    Disease asthma("Asthma", "Chronic respiratory disease", false);

    Medicine paracetamol("Paracetamol", "500mg", "Take twice a day");
    Medicine insulin("Insulin", "10 units", "Inject before meals");
    Medicine ibuprofen("Ibuprofen", "400mg", "Take every 6 hours for pain");
    Medicine amoxicillin("Amoxicillin", "500mg", "Take three times a day");

    Room r101(101);
    Room r102(102);
    Room r103(103);
    Room r104(104);
    Room r105(105);

    p1->addDisease(flu);
    p1->addDisease(bronchitis);
    p1->addMedicine(paracetamol);
    p1->addMedicine(amoxicillin);

    p2->addDisease(diabetes);
    p2->addDisease(allergy);
    p2->addMedicine(insulin);

    p3->addDisease(pneumonia);
    p3->addDisease(hypertension);
    p3->addMedicine(amoxicillin);

    p4->addDisease(gastritis);
    p4->addDisease(arthrits);
    p4->addMedicine(ibuprofen);

    p5->addDisease(hepatits);
    p5->addDisease(asthma);
    p5->addMedicine(paracetamol);

    doc1->assignPatient(p1);
    doc1->assignPatient(p2);
    doc2->assignPatient(p2);
    doc2->assignPatient(p3);
    doc3->assignPatient(p3);
    doc3->assignPatient(p4);
    doc4->assignPatient(p4);
    doc4->assignPatient(p5);
    doc5->assignPatient(p5);

    hospitalRecords.add(doc1);
    hospitalRecords.add(doc2);
    hospitalRecords.add(doc3);
    hospitalRecords.add(doc4);
    hospitalRecords.add(doc5);
    hospitalRecords.add(p1);
    hospitalRecords.add(p2);
    hospitalRecords.add(p3);
    hospitalRecords.add(p4);
    hospitalRecords.add(p5);

    p1->assignRoom(r101);
    p2->assignRoom(r102);
    p3->assignRoom(r103);
    p4->assignRoom(r104);
    p5->assignRoom(r105);


    cout << "=== Hospital Report ===\n";
    hospitalRecords.printAll();

    cout << "\n=== Removing patient Madina Ergasheva (index 9) ===\n";
    hospitalRecords.remove(9);
    hospitalRecords.printAll();

    delete doc1;
    delete doc2;
    delete doc3;
    delete doc4;
    delete doc5;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;

    return 0;
}