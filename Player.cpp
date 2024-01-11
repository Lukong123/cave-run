#include "Player.h"
#include <iostream>

Player::Player(Room* room) : Character(room), healthPoints(100) {}

Player::~Player() {}

void Player::move() {
    // Move player to a new room, handling up and down movement
    std::cout << "Enter your move (u - up, d - down, l - left, r - right): ";
    char move;
    std::cin >> move;
    if (move == 'u' && getRow() > 0) {
        setRow(getRow() - 1);
    } else if (move == 'd' && getRow() < ROWS - 1) {
        setRow(getRow() + 1);
    } else if (move == 'l' && getCol() > 0) {
        setCol(getCol() - 1);
    } else if (move == 'r' && getCol() < COLS - 1) {
        setCol(getCol() + 1);
    }
}

void Player::sense(Game* game) {
    // Sense the game state
}

void Player::update() {
    // Update player's state
}

void Player::damage(int amount) {
    // Reduce player's health points by the specified amount
    healthPoints -= amount;
}

void Player::poison() {
    // Poison the player
}