// Game.h
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
// private attribute
    Map map;
    Player player;
    Monster monster;
    bool isGameOver();
    void drawGame();
    void handlePlayerInput();
    void updateGame();
};

#endif  // GAME_H