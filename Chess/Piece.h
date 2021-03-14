
#ifndef PIECE_H
#define PIECE_H

#include <string>


class Piece {
public:
    Piece();
    Piece(const Piece& orig);
    void setName(std::string a);
    std::string getName();
    void setColor(char a);
    char getColor();
    virtual ~Piece();
private:
    std::string name = "   ";
    char color;
};

#endif /* PIECE_H */

