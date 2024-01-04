#include "Player.h"

namespace CaveRun {
    Player::Player(std::string _characterType, int _currentRoom, int _remainingMoves, int _healthPoints) : Character(std::string _characterType, int _currentRoom, int remainingMoves)
 {

    }


    void Player::onMove(GameObject &other) {
        GameObject::onMove(other);

    }
}


