/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Board.h
 * TC1030-T2
 *----------------------------------------------------------*/
#ifndef _BOARD_H
#define _BOARD_H
#include <iostream>
#include <ctime> 
#include "Tile.h"
#include "Snake.h"
#include "Normal.h"
#include "Lader.h"
#include <stdlib.h>
using namespace std;
class Board 
{
private:
    int Tiles, Snakes, Laders, maxturns, rewards, penalty;    
public:
    Tile *boardvector[100]; //Create a vector of the Tile class
    char board[100]; //game board
    Board(); 
    void creteboard(); //create the board with the defalt settings or the settings that the user wants
    void setsnakes(int);  //update the number of snakes
    void setladers(int); //update the number of Laders
    void setTiles(int); //update the number of Tiles 
    void setreward(int); 
    void setpenalty(int);
    int getTiles(); //get the number of Tiles 
    void setsettings(); //update the settings of the board 
    int getmaxTruns();  //get the maximun of turns 
    void setmaxTurns(int);  //update the number of maximum turns

};


#endif