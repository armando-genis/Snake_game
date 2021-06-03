/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Tile.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#include "Tile.h"

Tile::Tile()
{
    this->id = "?"; //default type of a Tile
    this->move = 1; //default numbers of move of the snakes tile
}

Tile::~Tile()
{
}
//polymorphism of the function move, because every tile move different
void Tile::setmove(int move){
    this->move=move; 
}
//polymorphism of the function setmove, beacuase every tile have a penalty, reward or move.
int Tile::Move(int pos){
    int newpos = pos + move; 
    return (newpos); 
}

string Tile::gettype(){
    return this->id;
}
