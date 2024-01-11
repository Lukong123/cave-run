#include "GameObject.h"
#include <string>

namespace CaveRun {
    class Character : public GameObject {
        std::string characterType;
        int currentRoom;
        int remainingMoves;

    public:
        Character(std::string _characterType, int _currentRoom, int _remainingMoves);
        int Sense() const;
        int Move() const;
        int Update() const;
        int resetMove();
        std::string getCharacterType() const {
            return characterType;
        };
        // virtual ~Character();

    };

    

    // int Character::Sense() const {
    //     return 0;
    // }

    // int Character::Move() const {
    //     return 0;
    // }

    // int Character::Update() const {
    //     return 0;
    // }

    // int Character::resetMove() {
    //     return 0;
    // }
}

// to be merged
// Character.h
#ifndef CHARACTER_H
#define CHARACTER_H

// Forward declaration of the Game class
class Game;

// Include necessary headers
#include "Room.h"

class Character {
public:
    Character(Room* room);
    virtual ~Character();

    virtual void sense(Game* game) = 0;
    virtual void move() = 0;
    virtual void update() = 0;

    void draw();

protected:
    Room* room;
    int movesRemaining;
};

#endif // CHARACTER_H