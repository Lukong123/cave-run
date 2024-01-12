
// Character.h
#ifndef CHARACTER_H
#define CHARACTER_H

// Forward declaration of the Game class
class Game;

// Include necessary headers
#include "Room.h"

class Character {
    // public attribute
public:
    Character(Room* room);
    virtual ~Character();

    virtual void sense(Game* game) = 0;
    virtual void move() = 0;
    virtual void update() = 0;

    void draw();
// protected attribute
protected:
    Room* room;
    int movesRemaining;
};

#endif