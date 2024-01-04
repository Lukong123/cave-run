#include "Character.h"
#include "GameObject.h"


namespace CaveRun {
    class Player : public Character {
        int healthPoints;
        
    public:
        Player(std::string _characterType, int _currentRoom, int _remainingMoves, int _healthPoints);
    
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
    
    
    

    }
}