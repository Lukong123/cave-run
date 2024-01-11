// TrapRoom.cpp
#include "TrapRoom.h"

TrapRoom::TrapRoom(int position, int damage) : Room(position), damage(damage) {
    // Additional initialization code if needed
}

TrapRoom::~TrapRoom() {
    // Destructor implementation if needed
}

void TrapRoom::visit(Character* player) {
    // Implementation of the visit() function in TrapRoom
    // Additional logic specific to TrapRoom
}

void TrapRoom::draw() {
    // Implementation of the draw() function in TrapRoom
    // Additional drawing logic specific to TrapRoom
}