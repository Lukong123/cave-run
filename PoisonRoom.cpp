// PoisonRoom.cpp
#include "PoisonRoom.h"
#include "Character.h"

PoisonRoom::PoisonRoom(int position) : Room(position) {}

PoisonRoom::~PoisonRoom() {}

void PoisonRoom::visit(Character* player) {
    //end game
}

void PoisonRoom::draw() {
    // Draw the poison room (green color)
}