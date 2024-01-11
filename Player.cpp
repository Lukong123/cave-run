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



// to be merged
#include "Player.h"

Player::Player(Room* room) : Character(room), healthPoints(100) {}

Player::~Player() {}

void Player::move() {
    // Move player to a new room, handling up and down movement
}

void Player::sense(Game* game) {
    // Sense the game state
}

void Player::update() {
    // Update player's state
}

void Player::damage(int amount) {
    // Reduce player's health points by the specified amount
}

void Player::poison() {
    // Poison the player
}