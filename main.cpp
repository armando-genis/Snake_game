/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: main.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#include <iostream>
#include "Board.h"
#include "MyGame.h"
#include <ctime>
using namespace std;


int main(){
    srand(time(NULL)); //Deletes from the memory the repetition of numbers 
    MyGame juego; //Instance of an object type MyGame
    juego.readfile("inCyE.txt"); //Read the txt file
    juego.start(); //The game is started
    

    
}