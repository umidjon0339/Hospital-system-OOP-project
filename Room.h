#ifndef ROOM_H
#define ROOM_H

class Room {
private:
    int roomNumber;

public:
    Room();
    Room(int number);

    void setRoomNumber(int number);
    int getRoomNumber() const;

    void displayRoomInfo() const;
};

#endif // ROOM_H
