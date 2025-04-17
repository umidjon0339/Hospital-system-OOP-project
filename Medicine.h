#ifndef MEDICINE_H
#define MEDICINE_H
using namespace std;
#include <iostream>


class Medicine {
 string name;
 string dosage;
 string instructions;
 public:
 Medicine();
 Medicine(string name, string dosage, string instructions);
 string getName();
 string getDosage();
 string getInstructions();
 void setName(string name);
 void setDosage(string dosage);
 void setInstructions(string instructions);
};



#endif //MEDICINE_H
