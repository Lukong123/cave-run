// Game.cpp
#include "Game.h"
#include <iostream>

Game::Game() {
    // Initialize game components
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
    // Draw the game state
    // This involves drawing the map, player, and monster
}

void Game::handlePlayerInput() {
    // Handle player input to move the player
    // This might involve asking for user input or using an AI algorithm
}

void Game::updateGame() {
    // Update the game state
    // This involves moving the monster and updating player and room interactions
}

bool Game::isGameOver() {
    // Check if the game is over (e.g., player reached the exit or was caught by the monster)
    // Return true if the game is over, false otherwise
}

