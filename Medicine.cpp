// Medicine.cpp
#include "Medicine.h"

Medicine::Medicine() : name(""), dosage(""), instructions("") {}

Medicine::Medicine(string name, string dosage, string instructions)
    : name(name), dosage(dosage), instructions(instructions) {}

void Medicine::setName(string name) {
    this->name = name;
}

string Medicine::getDosage() {
    return dosage;
}

string Medicine::getInstructions() {
    return instructions;
}

void Medicine::setInstructions(string instructions) {
    this->instructions = instructions;
}

void Medicine::setDosage(string dosage) {
    this->dosage = dosage;
}

string Medicine::getName() {
    return name;
}