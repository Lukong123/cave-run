// Room.cpp
#include "Room.h"
#include "Character.h"

Room::Room(int position) : position(position) {}

Room::~Room() {}

void Room::visit(Character* player) {
    // Perform actions when the player visits the room
}

int Room::getPosition() const {
    return position;
}

