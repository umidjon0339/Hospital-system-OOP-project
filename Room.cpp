#include <iostream>
#include "Room.h"
using namespace std;

Room::Room() : roomNumber(0) {}

Room::Room(int number) : roomNumber(number) {}

void Room::setRoomNumber(int number) {
    roomNumber = number;
}

int Room::getRoomNumber() const {
    return roomNumber;
}

void Room::displayRoomInfo() const {
    cout << "Room Number: " << roomNumber <<endl;
}
