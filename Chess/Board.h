
#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board();
    Board(const Board& orig);
    Square chessboard[8][8];
    Square getSpot(int a, int b);
    virtual ~Board();
private:
    
};

#endif /* BOARD_H */

