#include "Monster.h"

namespace CaveRun {
    Monster::Monster(std::string _characterType, int _currentRoom, int _remainingMoves, int _exitRoom) : Character(std::string _characterType, int _currentRoom, int remainingMoves)
 {

    }


    void Monster::onMove(GameObject &other) {
        GameObject::onMove(other);

    }
}


