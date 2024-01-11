// TrapRoom.h
#ifndef TRAPROOM_H
#define TRAPROOM_H

#include "Room.h"

class TrapRoom : public Room {
public:
    TrapRoom(int position, int damage);
    ~TrapRoom();

    void visit(Character* player) override;
    void draw() override;

private:
    int damage;
};

#endif // TRAPROOM_H