#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Player.h"
#include "Monster.h"
#include "Cave.h"

// Constants for cave dimensions: Using 5 for our sample
const int ROWS = 5;
const int COLS = 5;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Create the cave and initialize it
    Cave cave(ROWS, COLS);
    cave.initialize();

    // Set the player and monster positions
    Player player(ROWS - 1, 0);
    Monster monster(0, COLS - 1);

    // Game loop
    while (true) {
        // Print the cave
        cave.print();

        // Get player's move
        std::cout << "Enter your move (u - up, d - down, l - left, r - right): ";
        char move;
        std::cin >> move;

        // Update player's position based on the move
        player.move(move);

        // Check if the player and monster are in the same room
        if (player.getPosition() == monster.getPosition()) {
            std::cout << "Oops! Sorry, the monster caught you. Game over!" << std::endl;
            break;
        }

        // Update monster's position (random move)
        monster.moveRandom();

        // Check if the player reached the exit
        if (player.getPosition() == cave.getExitPosition()) {
            std::cout << "******* Congratulations! Escaped successfully!. You win! ********" << std::endl;
            break;
        }

        // Update the cave with player and monster positions
        cave.update(player, monster);

        // Clear the screen for the next iteration
        system("clear");
    }

    return 0;
}