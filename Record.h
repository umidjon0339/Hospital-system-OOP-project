#ifndef RECORD_H
#define RECORD_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class Record {
    vector<T> items;

public:
    void add(T item);
    void remove(int index);
    void printAll();
};

#endif // RECORD_H
