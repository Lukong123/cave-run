// Room.h
#ifndef ROOM_H
#define ROOM_H

class Character; // Forward declaration to avoid circular dependency

class Room {
public:
    Room(int position);
    virtual ~Room();

    virtual void visit(Character* player) = 0;
    virtual void draw() = 0;

    int getPosition() const;

private:
    int position;
};

#endif // ROOM_H