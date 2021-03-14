
#include "Piece.h"

Piece::Piece() {
    name = "   ";
    color = 'N';
}

void Piece::setName(std::string a) {
    name = a;
}

std::string Piece::getName() {
    return name;
}

void Piece::setColor(char a) {
    color = a;
}

char Piece::getColor() {
    return color;
}

Piece::Piece(const Piece& orig) {
}

Piece::~Piece() {
}

