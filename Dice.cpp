/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Dice.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#include "Dice.h"
#include <ctime> //Inclusion of the library 

Dice::Dice(){ //Declaration of the default constructor
  caras = 6; //Number of sides of the dice = 6
}

int Dice::Roll(){ //Declaration of Roll(), here we generate random number in range of 1 and 6 every time we call it. 
  int valor = (rand() % caras) + 1; 
  return valor; 
}