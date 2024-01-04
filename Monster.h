#include "Character.h"
#include "GameObject.h"


namespace CaveRun {
    class Monster : public Character {
        float exitRoom;
        
    public:
        Monster(std::string _characterType, int _currentRoom, int _remainingMoves, int _exitRoom);
    
    void onMove(GameObject &other)override;

    int decideMove() const{
        return 0;
    }
    }
}