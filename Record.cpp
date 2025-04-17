// Record.cpp
#include "Record.h"
#include "Person.h"
template <typename T>
void Record<T>::add(T item) {
    items.push_back(item);
}

template<typename T>
void Record<T>::remove(int index) {
    if (index >= 0 && index < items.size()) {
        items.erase(items.begin() + index);
    } else {
        cout << "The item does not exist" << endl;
    }
}

template<typename T>
void Record<T>::printAll() {
    if (items.empty()) {
        cout << "No items in record" << endl;
        return;
    }
    for (auto i = items.begin(); i != items.end(); ++i) {
        (*i)->displayInfo(); // Changed from display() to displayInfo()
    }
}

// Explicit instantiation for Person* to help linker
template class Record<Person*>;