#include "Character.h"
#include "GameObject.h"


namespace CaveRun {
    class Player : public Character {
        int healthPoints;
        
    public:
        Player(std::string _characterType, int _currentRoom, int remainingMoves, int healthPoints);
    
    void onMove(GameObject &other)override;

    }
}