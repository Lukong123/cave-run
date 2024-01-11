#include "Character.h"

namespace CaveRun {
    
    Character::Character(std::string _characterType, int _currentRoom, int _remainingMoves): characterType(_characterType), currentRoom(_currentRoom), remainingMoves(_remainingMoves){

    }

       int Character::Sense() const {
        return 0;
    }

    int Character::Move() const {
        return 0;
    }

    int Character::Update() const {
        return 0;
    }

    int Character::resetMove() {
        return 0;
    }
}
// Character::Character(std::string _characterType, int _currentRoom, int _remainingMoves)
//         : characterType(_characterType), currentRoom(_currentRoom), remainingMoves(_remainingMoves) {
//         // Constructor implementation
//     }


// to be merged
// Character.cpp
#include "Character.h"

Character::Character(Room* room) : room(room), movesRemaining(0) {}

Character::~Character() {}

void Character::draw() {
    // Draw character with colored box and label
}