#include <string>
#include <cstdlib>
#include <iostream>
#include "Piece.h"
#include "Square.h"
#include "Board.h"

using namespace std;

void swap(std::string play[]);
void displayboard(Board subboard);

int main(int argc, char** argv) {
    
    bool done = false;
    Board mainboard;
    mainboard = Board();
    string players[] = {"P1","P2"};
    
    displayboard(mainboard);
    
    while(!done)
    {
        int x;
        int y;
        swap(players);
        cout << "Player " << players[0] << " turn" << endl;
        bool correct = false;
        while(correct)
        {
            correct = true;
            cout << "Select a piece. Input the x" << endl;
            cin >> x;
            if(x > 7 || x < 0)
            {
                correct = false;
            }   
            cout << "Input the y" << endl;
            cin >> y;
            if(y > 7 || 7 < 0)
            {
                correct = false;
            }
            if(!correct)
            {
                cout << "Invalid input" << endl;
            }
        }
        
    }
    
    return 0;
}

void displayboard(Board subboard)
{
    
    for(int y = 0; y < 8; y++)
    {
        std::cout << "|";
        for(int x = 0; x < 8; x++)
        {
            cout << subboard.chessboard[x][y].token.getName() << "|";
        }
        cout << endl;
    }
}

void swap(std::string play[])
{
    std::string temp = play[0];
    play[0] = play[1];
    play[1] = temp;
}