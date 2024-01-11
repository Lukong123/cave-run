// PoisonRoom.h
#ifndef POISONROOM_H
#define POISONROOM_H

#include "Room.h"

class PoisonRoom : public Room {
public:
    PoisonRoom(int position);
    ~PoisonRoom();

    void visit(Character* player) override;
    void draw() override;
};

#endif