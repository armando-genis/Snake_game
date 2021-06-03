/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Lader.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#ifndef _LADER_H
#define _LADER_H
#include "Tile.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class Lader : public Tile
{
private:
    string id;
    int move; 

public:
    Lader(/* args */);
    ~Lader();
    void setmove(int); //update the number of additional squares that are advanced if you fall on a ladder
    int Move(int);  //return the move with the reward 
    string gettype();
};
#endif