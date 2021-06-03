#include "Lader.h"

Lader::Lader(){
    this->id = "L"; //default type of the Lader tile 
    this->move = 3; //default reward of the lader tile 
}

Lader::~Lader()
{
}
//update the number of additional squares that are advanced if you fall on a ladder
void Lader::setmove(int move){
    this->move=move; 
}
//return the move with the reward 
int Lader::Move(int pos){
    int newpos = pos + move; 
    return newpos; 
}
string  Lader::gettype(){
    return this->id;
}


