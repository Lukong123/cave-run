#include "GameObject.h"
#include <string>

namespace CaveRun {
    class Character : public GameObject {
        std::string characterType;
        int currentRoom;
        int remainingMoves;

    public:
        Character(std::string _characterType, int _currentRoom, int _remainingMoves);
        int Sense() const;
        int Move() const;
        int Update() const;
        int resetMove();
        std::string getCharacterType() const {
            return characterType;
        };
        // virtual ~Character();

    };

    

    // int Character::Sense() const {
    //     return 0;
    // }

    // int Character::Move() const {
    //     return 0;
    // }

    // int Character::Update() const {
    //     return 0;
    // }

    // int Character::resetMove() {
    //     return 0;
    // }
}