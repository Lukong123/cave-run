#ifndef GAME_H
#define GAME_H

#include "Map.h"
#include "Player.h"
#include "Monster.h"

class Game {
public:
Game();
~Game();

void run();
private:
Map map;
Player player;
Monster monster;

void drawGame();
void handlePlayerInput();
void updateGame();
bool isGameOver();
};

#endif 