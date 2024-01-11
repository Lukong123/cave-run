// Map.cpp
#include "Map.h"
#include "PoisonRoom.h"
#include "TrapRoom.h"

Map::Map() {
    createRooms();
}

Map::~Map() {
    for (Room* room : rooms) {
        delete room;
    }
}

void Map::createRooms() {
    // Create and initialize rooms
    rooms.push_back(new PoisonRoom(1));
    rooms.push_back(new PoisonRoom(2));
    rooms.push_back(new TrapRoom(3, 10));
    
}

Room* Map::getRoom(int position) {
    for (Room* room : rooms) {
        if (room->getPosition() == position) {
            return room;
        }
    }
    return nullptr;
}