#include "Monster.h"

namespace CaveRun {
    Monster::Monster(std::string _characterType, int _currentRoom, int _remainingMoves, int _exitRoom) : Character(std::string _characterType, int _currentRoom, int remainingMoves)
 {

    }


    void Monster::onMove(GameObject &other) {
        GameObject::onMove(other);

    }
}

// to be merged
#include "Monster.h"

Monster::Monster(Room* room) : Character(room), healthPoints(100) {}

Monster::~Monster() {}

void Monster::move() {
    // Move the monster to a new room
}

void Monster::sense(Game* game) {
    // Sense the game state
}

void Monster::update() {
    // Update the monster's state
}

