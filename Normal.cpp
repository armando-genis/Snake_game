/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Normal.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#include "Normal.h"

Normal::Normal(){

    this->id = "N"; //default type of the normal tile
    this->move = 1; //default numbers of move of the normal tile 
}

Normal::~Normal()
{
}
//update the number of additional squares that are advanced if you fall on a normal tile 
void Normal::setmove(int move){
    this->move=move; 
}
//return the move or position
int Normal::Move(int pos){
    int newpos = pos ; 
    return newpos; 
}
string  Normal::gettype(){
    return this->id;
}

