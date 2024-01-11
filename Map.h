// Map.h
#ifndef MAP_H
#define MAP_H

#include <vector>
#include "Room.h"

class Map {
public:
    Map();
    ~Map();

    void createRooms();
    Room* getRoom(int position);

private:
    std::vector<Room*> rooms;
};

#endif