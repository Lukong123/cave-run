#ifndef CAVE_H
#define CAVE_H

class Cave {
private:
    char** layout;  // 2D array to represent the cave layout
    int rows;       // number of rows in the cave
    int cols;       // number of columns in the cave
    int exitRow;    // row position of the exit
    int exitCol;    // column position of the exit

public:
    // Constructor
    Cave(int rows, int cols);

    // Destructor
    ~Cave();

    // Function to initialize the cave with empty rooms
    void initialize();

    // Function to print the cave layout
    void print();

    // Function to update the cave with player and monster positions
    void update(const Player& player, const Monster& monster);

    // Function to get the exit position
    Position getExitPosition() const;
};

#endif  // CAVE_H