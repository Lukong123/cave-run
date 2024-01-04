#include <iostream>
#include "Player.h"

int main() {
    std::cout << "Hello cave run!!!" << std::endl;
    CaveRun::Player  player("Q", 1, 4, 5);
    // std::string Symbol = player.characterType;
    std::string Symbol = player.getCharacterType();
    std::cout << "Player Symbol: " << Symbol << std::endl;

    // int roomPosition = player.currentRoom;
    // std::cout << "Room Number: " << roomPosition << std::endl;


};