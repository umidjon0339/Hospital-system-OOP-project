#ifndef DISEASE_H
#define DISEASE_H
#include <iostream>
using namespace std;
class Disease {
    protected:
    string name;
    string description;
    bool isContagious;
    public:
    Disease(string name, string description, bool isContagious);
    string getName();
    string getDescription();
    bool getIsContagious();
    void setIsContagious(bool isContagious);
    void setName(string name);
    void setDescription(string description);
};



#endif //DISEASE_H
