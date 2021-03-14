
#include "Piece.h"
#include "Square.h"

Square::Square() {
}

Square::Square(int a, int b) {
    x = a;
    y = b;
    ocu = false;
    token = Piece();
}

Square::Square(const Square& orig) {
}

Piece Square::getPiece() {
    return token;
}

bool Square::getOCU() {
    return ocu;
}

Square::getX() {
    return x;
}

Square::getY() {
    return y;
}

void Square::setOCU(bool a) {
    ocu = a;
}

void Square::setX(int a) {
    x = a;
}

void Square::setY(int b) {
    y = b;
}

Square::~Square() {
}

