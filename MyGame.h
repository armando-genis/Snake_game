/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Mygame.h
 * TC1030-T2
 *----------------------------------------------------------*/
#include "Board.h"
#include "Player.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
using namespace std;

class MyGame{
  private:
    int players;
    int turno;  
    Board board1; //Create a Board class
    Player *numplayers[10]; //Create a vector of the Player class
    char matriz[100][100]; //a matrix that saves the characters from the txt file  
    void settingsboard(); //update the number of tiles, snakes and laders in the board
    void settingsTiles(); //update the penalty, reward and numbers of players in the game. 
    int getTurno(); //get the value of the turn
    int aumentarTurno(); //increasing one turn
    void setTurno(int); //update the value of the turn
    void setplayers(int);  // update the numbers of players
    
  public:
  MyGame(); //default constructor for MyGame
  void start();
  void readfile(std::string); //read the file text that contains the characters C and E to count how many turns there are
  
   
 
  
};