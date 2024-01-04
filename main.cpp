#include <iostream>
#include "Player.h"

int main() {
    std::cout << "Hello cave run!!!" << std::endl;
    Player player("Q", 1, 4, 5);
    std::string Symbol = player.characterType();
    std::cout << "Player Symbol: " << Symbool << std::endl;
    int roomPosition = player.currentRoom();
    std::cout << "Room Number: " << roomPosition << std::endl;

    // Car::SwitchOn();
    // Car::SwitchOff();

};