#include "Cave.h"

// Constructor
Cave::Cave(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    layout = new char*[rows];
    for (int i = 0; i < rows; i++) {
        layout[i] = new char[cols];
    }
}

// Destructor
Cave::~Cave() {
    for (int i = 0; i < rows; i++) {
        delete[] layout[i];
    }
    delete[] layout;
}

// Function to initialize the cave with empty rooms
void Cave::initialize() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            layout[i][j] = '-';
        }
    }
}

// Function to print the cave layout
void Cave::print() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << layout[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to update the cave with player and monster positions
void Cave::update(const Player& player, const Monster& monster) {
    initialize();
    const Position& playerPos = player.getPosition();
    const Position& monsterPos = monster.getPosition();
    layout[playerPos.getRow()][playerPos.getCol()] = 'P';
    layout[monsterPos.getRow()][monsterPos.getCol()] = 'M';
}

// Function to get the exit position
Position Cave::getExitPosition() const {
    return Position(exitRow, exitCol);
}