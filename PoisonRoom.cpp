#include "PoisonRoom.h"
#include "Character.h"
#include <iostream>

PoisonRoom::PoisonRoom(int position) : Room(position) {}

PoisonRoom::~PoisonRoom() {}

void PoisonRoom::visit(Character* player) {
    // End the game by poisoning the player
    std::cout << "Oops! You entered a poison room. You have been poisoned. Game over!" << std::endl;
    player->poison();
}

void PoisonRoom::draw() {
    // Draw the poison room (green color)
    std::cout << "\033[32mP\033[0m ";
}