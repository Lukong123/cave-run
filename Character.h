#include "GameObject.h"


namespace CaveRun {
    class Character : public GameObject {
        std::string characterType;
        int currentRoom;
        int remainingMoves;
        

    public:
        Player(std::string _characterType, int _currentRoom, int remainingMoves);


    int Sense() const{
        return sense;
    }
    
    float Move() const{
        return move;
    }

    float Update() const{
        return update;
    }

    float resetMove() {
        return resetMove;
    }
    }
}