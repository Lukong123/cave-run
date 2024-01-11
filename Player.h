#include "Character.h"
// #include "GameObject.h"


namespace CaveRun {
    class Player : public Character {
        int healthPoints;
        
    public:
        Player(std::string _characterType, int _currentRoom, int _remainingMoves, int _healthPoints);
        // ~Player();
    
    void onMove(GameObject &other)override;

    bool isPoisoned() const{
        return false;
    }
    
    int poisonDamage() const{
        return 0;
    }

    float cureProbability() const{
        return 0;
    }

    int Damage(int amount) const{
        return amount;
    }

    std::string getCharacterType() const {
            return Character::getCharacterType();
    }

    
    
    

    };
}

// Player.h to be merged
#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player : public Character {
public:
    Player(Room* room);
    ~Player();
    Player();

    void move() override;
    void sense(Game* game) override;
    void update() override;

    void damage(int amount);
    void poison();

private:
    int healthPoints;
};

#endif // PLAYER_H