/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Player.cpp
 * TC1030-T2
 *----------------------------------------------------------*/

#include "Player.h"
#include "Dice.h" //Inclusion of the class Dice

Player::Player(){ //Declaration of the default constructor 
  posicion = 1; //Default position of the player = 1
  numero = 1; //Default number of the player = 1
}

Player::Player(int pos, int num){ //Declaration of the constructor for the player in order set a position and a number
  posicion = pos;
  numero = num;
}

int Player::getNumero(){ //Function to get the number of the player
  return numero;
}

void Player::setPosicion(int dato){ //Function to set the position of the player on the board
  posicion = dato;
}

int Player::getPosicion(){ //Function to get the position of the player on the board
  return posicion;
}

int Player::rollDice(){ //Function to roll the dice and get a random number in range of 1 and 6
  Dice d; //Declaration of a dice
  int dado = d.Roll(); //We use the function Roll() to get our random number
  return dado; 
}