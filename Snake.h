/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Snanke.h
 * TC1030-T2
 *----------------------------------------------------------*/
#ifndef _SNAKE_H
#define _SNAKE_H
#include "Tile.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class Snake : public Tile
{
private:
    string id;
    int move; 

public:
    Snake(/* args */);
    ~Snake();
    void setmove(int); //update the number of squares to go back if you fall into a snake
    int Move(int); //return the move with the penalty 
    string gettype(); 
    
};
#endif