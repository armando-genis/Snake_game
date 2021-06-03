/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Dice.h
 * TC1030-T2
 *----------------------------------------------------------*/
#ifndef _DICE_H
#define _DICE_H
#include <iostream>

class Dice{ //Declaration of the class Dice
  private: //Private atributes
  int caras; //Number of sides 

  public://Functions of the class
  Dice(); //Default constructor 
  int Roll(); //Function to roll the dice and get a random number 
};                 
#endif