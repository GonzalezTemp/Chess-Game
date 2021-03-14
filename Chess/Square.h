
#ifndef SQUARE_H
#define SQUARE_H

class Square {
public:
    Square();
    Square(int a, int b);
    Square(const Square& orig);
    Piece token;
    Piece getPiece();
    int x;
    int y;
    bool ocu;
    void setX(int a);
    void setY(int b);
    int getX();
    int getY();
    bool getOCU();
    void setOCU(bool a);
    virtual ~Square();
private:
    
};

#endif /* SQUARE_H */

