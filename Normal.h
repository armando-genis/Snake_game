/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Normal.h
 * TC1030-T2
 *----------------------------------------------------------*/
#ifndef _NORMAL_H
#define _NORMAL_H
#include "Tile.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class Normal : public Tile
{
private:
    string id;
    int move; 

public:
    Normal(/* args */);
    ~Normal();
    void setmove(int); //update the number of additional squares that are advanced if you fall on a normal tile 
    int Move(int);  //return the move or position
    string gettype();
};
#endif