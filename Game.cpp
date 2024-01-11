// Game.cpp
#include "Game.h"
#include <iostream>

Game::Game() : map(ROWS, COLS), player(ROWS - 1, 0), monster(0, COLS - 1) {
    // Initializing game components
}

Game::~Game() {
    // Clean up game components
}

void Game::run() {
    while (!isGameOver()) {
        drawGame();
        handlePlayerInput();
        updateGame();
    }
}

void Game::drawGame() {
    // Clear the screen
    system("clear");

    // Draw the map
    map.draw();

    // Draw the player
    player.draw();

    // Draw the monster
    monster.draw();
}
void Game::handlePlayerInput() {
    // Get player's move
    std::cout << "Enter your move (u - up, d - down, l - left, r - right): ";
    char move;
    std::cin >> move;

    // Update player's position based on the move
    if (move == 'u' && playerRow > 0) {
        playerRow--;
    } else if (move == 'd' && playerRow < ROWS - 1) {
        playerRow++;
    } else if (move == 'l' && playerCol > 0) {
        playerCol--;
    } else if (move == 'r' && playerCol < COLS - 1) {
        playerCol++;
    }
}

void Game::updateGame() {
    // Update the game state
    // This involves moving the monster and updating player and room interactions
    int monsterMove = getRandomNumber(0, 3);
    if (monsterMove == 0 && monster.getRow() > 0) {
        monster.moveUp();
    } else if (monsterMove == 1 && monster.getRow() < ROWS - 1) {
        monster.moveDown();
    } else if (monsterMove == 2 && monster.getCol() > 0) {
        monster.moveLeft();
    } else if (monsterMove == 3 && monster.getCol() < COLS - 1) {
        monster.moveRight();
    }
}

bool Game::isGameOver() {
    // Check if the game is over (e.g., player reached the exit or was caught by the monster)
    // Return true if the game is over, false otherwise
    return player.hasReachedExit() || player.getRow() == monster.getRow() && player.getCol() == monster.getCol();
}