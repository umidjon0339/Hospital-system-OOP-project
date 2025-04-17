#include "Disease.h"

Disease:: Disease(string name, string description, bool isContagious) {
    this->name = name;
    this->description = description;
    this->isContagious = isContagious;
}
string Disease:: getName() {
    return name;
}
string Disease:: getDescription() {
    return description;
}
bool Disease:: getIsContagious() {
    return isContagious;
}
void Disease::setDescription(string description) {
    this->description = description;
}
void Disease::setName(string name) {
    this->name = name;
}
void Disease::setIsContagious(bool isContagious) {
    this->isContagious = isContagious;
}


