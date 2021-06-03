/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Player.h
 * TC1030-T2
 *----------------------------------------------------------*/
#ifndef _PLAYER_H
#define _PLAYER_H
#include <iostream>
#include "Dice.h"

class Player{ //Declaration of the class player 
  private: //Private atributes
  int posicion; //Postion of the player on the board 
  int numero; //Number of the player

  public: //Functions of the class
  Player(); //Default constructor 
  Player(int, int); //Constructor
  int getNumero(); //Function to get the number of the player
  void setPosicion(int); //Function to set the position of the player on the board
  int getPosicion(); //Function to get the position of the player on the board
  int rollDice(); //Function to roll a dice and get a random number in range of 1 and 6

};
#endif