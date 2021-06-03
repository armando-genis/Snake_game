#ifndef _TILE_H
#define _TILE_H
#include <stdlib.h>
/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Tile.h
 * TC1030-T2
 *----------------------------------------------------------*/
#include <iostream>
using namespace std;

class Tile
{
private:
    string id; 
    int move; 
public:
    Tile(/* args */);
    ~Tile();
    virtual int Move(int); //polymorphism of the function move, because every tile move different
    virtual void setmove(int); //polymorphism of the function setmove, beacuase every tile have a penalty, reward or move. 
    virtual string gettype(); 
};
#endif