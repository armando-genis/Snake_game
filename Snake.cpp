/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Snake.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#include "Snake.h"

Snake::Snake(/* args */)
{
    this->id = "S"; //default type of the Sankes tile
    this->move = 3; //default numbers of move of the snakes tile

}

Snake::~Snake()
{
}
//update the number of squares to go back if you fall into a snake
void Snake::setmove(int pos){
    this->move=pos;
}
//return the move with the penalty 
int Snake::Move(int pos){
    int newpos = pos - move; 
    return newpos; 
}
string  Snake::gettype(){
    return this->id;
}



