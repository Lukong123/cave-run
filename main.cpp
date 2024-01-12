// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include "Player.h"
// #include "Monster.h"
// #include "Cave.h"

// // Constants for cave dimensions: Using 5 for our sample
// const int ROWS = 5;
// const int COLS = 5;

// int main() {
//     // Seed the random number generator
//     srand(static_cast<unsigned int>(time(0)));

//     // Create the cave and initialize it
//     Cave cave(ROWS, COLS);
//     cave.initialize();

//     // Set the player and monster positions
//     Player player(ROWS - 1, 0);
//     Monster monster(0, COLS - 1);

//     // Game loop
//     while (true) {
//         // Print the cave
//         cave.print();

//         // Get player's move
//         std::cout << "Enter your move (u - up, d - down, l - left, r - right): ";
//         char move;
//         std::cin >> move;

//         // Update player's position based on the move
//         player.move(move);

//         // Check if the player and monster are in the same room
//         if (player.getPosition() == monster.getPosition()) {
//             std::cout << "Oops! Sorry, the monster caught you. Game over!" << std::endl;
//             break;
//         }

//         // Update monster's position (random move)
//         monster.moveRandom();

//         // Check if the player reached the exit
//         if (player.getPosition() == cave.getExitPosition()) {
//             std::cout << "******* Congratulations! Escaped successfully!. You win! ********" << std::endl;
//             break;
//         }

//         // Update the cave with player and monster positions
//         cave.update(player, monster);

//         // Clear the screen for the next iteration
//         system("clear");
//     }

//     return 0;
// }


#include <iostream>
#include <cstdlib>
#include <ctime>

// Constants for cave dimensions: Using 5 for our sample
const int ROWS = 5;
const int COLS = 5;

// Function to print our cave layout
void printCave(char cave[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << cave[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to initialize the cave with empty rooms
void initializeCave(char cave[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cave[i][j] = '-';
        }
    }
}

// Function to generate a random number between min and max
int getRandomNumber(int min, int max) {
    return min + (rand() % (max - min + 1));
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Create the cave and initialize it
    char cave[ROWS][COLS];
    initializeCave(cave);

    // Set the player and monster positions
    int playerRow = ROWS - 1;
    int playerCol = 0;
    int monsterRow = 0;
    int monsterCol = COLS - 1;

    // Game loop
    while (true) {
        // Print the cave
        printCave(cave);

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

        // Check if the player and monster are in the same room
        if (playerRow == monsterRow && playerCol == monsterCol) {
            std::cout << "Oops! Sorry, the monster caught you. Game over!" << std::endl;
            break;
        }

        // Update monster's position (random move)
        int monsterMove = getRandomNumber(0, 3);
        if (monsterMove == 0 && monsterRow > 0) {
            monsterRow--;
        } else if (monsterMove == 1 && monsterRow < ROWS - 1) {
            monsterRow++;
        } else if (monsterMove == 2 && monsterCol > 0) {
            monsterCol--;
        } else if (monsterMove == 3 && monsterCol < COLS - 1) {
            monsterCol++;
        }

        // Check if the player reached the exit
        if (playerRow == 0 && playerCol == COLS - 1) {
            std::cout << "******* Congratulations! Escaped successfully!. You win! ********" << std::endl;
            break;
        }

        // Update the cave with player and monster positions
        initializeCave(cave);
        cave[playerRow][playerCol] = 'P';
        cave[monsterRow][monsterCol] = 'M';
        
        // Wait for a moment before clearing the screen for the next iteration
        std::cout << "Press Enter to continue..." << std::endl;
        std::cin.ignore();
        std::cin.get();
        system("clear"); 
    }

    return 0;
}