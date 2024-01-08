#include "Player.h"

namespace CaveRun {
    Player::Player(const std::string& _characterType, int _currentRoom, int _remainingMoves, int _healthPoints) : Character(_characterType,  _currentRoom,  _remainingMoves)
 


    void Player::onMove(GameObject &other) {
        GameObject::onMove(other);

    }
}

// Player::Player(std::string _characterType, int _currentRoom, int _remainingMoves, int _healthPoints) {
//     this -> _currentRoom = currentRoom;
//     this -> _remainingMoves = remainingMoves;
//     // this -> 
// }

// Car::Car(std::string manuf, float fuel, int reg):manufacturer(manuf), registrationNum(reg){
//     this ->fuel = fuel;
//     speed = 0;

// }

