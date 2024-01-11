#include "Monster.h"
#include <cstdlib>

Monster::Monster(Room* room) : Character(room), healthPoints(100) {}

Monster::~Monster() {}

void Monster::move() {
    // Move the monster to a new room
    int monsterMove = getRandomNumber(0, 3);
    if (monsterMove == 0 && getRow() > 0) {
        setRow(getRow() - 1);
    } else if (monsterMove == 1 && getRow() < ROWS - 1) {
        setRow(getRow() + 1);
    } else if (monsterMove == 2 && getCol() > 0) {
        setCol(getCol() - 1);
    } else if (monsterMove == 3 && getCol() < COLS - 1) {
        setCol(getCol() + 1);
    }
}

void Monster::sense(Game* game) {
    // Sense the game state
}

void Monster::update() {
    // Update the monster's state
}

int Monster::getRandomNumber(int min, int max) {
    return min + (rand() % (max - min + 1));
}