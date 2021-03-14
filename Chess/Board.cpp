
#include "Piece.h"
#include "Square.h"
#include "Board.h"

Board::Board() {
    for(int y = 0; y < 8; y++)
    {
        for(int x = 0; x < 8; x++)
        {
            chessboard[x][y] = Square(x,y);
            if(y == 0 || y == 1)
            {
                chessboard[x][y].setOCU(true);
                chessboard[x][y].token.setColor('W');
                if(y == 1)
                {
                    chessboard[x][y].token.setName("PW!");
                }
            }
            if(y == 6 || y == 7)
            {
                chessboard[x][y].setOCU(true);
                chessboard[x][y].token.setColor('B');
                if(y == 6)
                {
                    chessboard[x][y].token.setName("PW?");
                }
            }
        }
    }
    
    chessboard[0][0].token.setName("RK!");
    chessboard[1][0].token.setName("KN!");
    chessboard[2][0].token.setName("BS!");
    chessboard[3][0].token.setName("QU!");
    chessboard[4][0].token.setName("KG!");
    chessboard[5][0].token.setName("BS!");
    chessboard[6][0].token.setName("KN!");
    chessboard[7][0].token.setName("RK!");
    
    chessboard[0][7].token.setName("RK?");
    chessboard[1][7].token.setName("KN?");
    chessboard[2][7].token.setName("BS?");
    chessboard[3][7].token.setName("QU?");
    chessboard[4][7].token.setName("KG?");
    chessboard[5][7].token.setName("BS?");
    chessboard[6][7].token.setName("KN?");
    chessboard[7][7].token.setName("RK?");
}

Square Board::getSpot(int a, int b) {
    return chessboard[a][b];
}

Board::Board(const Board& orig) {
}

Board::~Board() {
}

