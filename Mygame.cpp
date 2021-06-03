/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Mygame.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#include "MyGame.h"

MyGame::MyGame()
{
  this->players=2; //set the numbers of players to 2
  this->turno = 1; //set initial turn of the game
}
//get the value of the turn
int MyGame::getTurno()
{
  return this->turno;
}
//update the value of the turn
void MyGame::setTurno(int dato)
{
  this->turno = dato;
}
//increasing one turn
int MyGame::aumentarTurno()
{
  int next = getTurno() + 1;
  return next;
}
// update the numbers of players 
void MyGame::setplayers(int players){
  this->players=players; 
} 
//update the penalty, reward and numbers of players in the game. 
void MyGame::settingsTiles(){
  int numplays; 
  cout << "PLAYERS SETTINGS: "<< endl;
  cout << "Number of players:  ";
  cin >> numplays;
  setplayers(numplays); 
}
//update the number of tiles, snakes and laders in the board
void MyGame::settingsboard(){
  char des; 
    cout << "Do you want to change the setting of the game, or use the default settings? N = new or D = defalt board: ";
    cin >> des; 
    if(des == 'N'){
      board1.setsettings();
      settingsTiles();

    }
    cout << "\n" << endl;
    cout << "The board is: ";
    board1.creteboard();

}

void MyGame::start()
{
  ofstream fileout;                           //create the variable fileout type ofstream
  fileout.open("outescayserp.txt", ios::out); //create a new txt file to save and write the output in the txt file
  if (fileout.fail())
  { // if the file doesn't open, it will exit the file
    cout << "The file couldn't be read" << endl;
    exit(1);
  }

  settingsboard(); //Print and update the settings
  for (int i = 0; i < players; i++)
  {
    numplayers[i] = new Player(1,i+1);
  }

  int type; //Menu to select the game mode
  cout << "\n" << endl;
  cout << "Select game mode: " << endl;
  cout << "Mode 1: Manual  (write 1)" << endl;
  cout << "Mode 2: Auto  (write 2)" << endl;
  cout << "Mode 3: with txt file  (write 3)" << endl;
  cout << "Write 1,2 or 3: " << endl;
  cin >> type;

  cout << "Press C to continue next turn, or E to end the game" << endl; //first message and it will only appear once 
  fileout << "Press C to continue next turn, or E to end the game" << endl;

  //GAME

  char opcion = 'J';
  int counterplay = 1; 
  int countermatrix=0; 
  while (opcion != 'E')
  {
    if(type == 1) //manual mode
    {
      cin >> opcion; //
    }
    else if (type == 2) //automatic mode
    { 
      if (getTurno() < board1.getmaxTruns())
      {
        opcion = 'C'; 
      }
    }
    else if (type == 3) //automatic mode
    {
      opcion = matriz[0][countermatrix];
    }
    else {
      cout << "YOU MUST WRITE 1,2 OR 3. THE PROGRAM WILL SHOT DOWN :)" << endl; 
      break; 
    }


    if(opcion == 'C')
    {
      int p_pos_actual = numplayers[counterplay-1]->getPosicion();//position of the players 
      int p_tirada = numplayers[counterplay-1]->rollDice(); // dice value for players
      int p_pos_nueva_N = p_pos_actual + p_tirada; // position of players, adding the dice value and the current position
      //if statement that set the position of the players to 30 if it exceeds 30
      if (p_pos_nueva_N >= board1.getTiles())
      { 
        p_pos_nueva_N = board1.getTiles();
      }
      if (p_pos_nueva_N <= 0)
      { 
        p_pos_nueva_N = 1;
      }

      if(board1.boardvector[p_pos_nueva_N-1]->gettype() == "N" || board1.boardvector[p_pos_nueva_N-1]->gettype() == "S" || board1.boardvector[p_pos_nueva_N-1]->gettype() == "L")
      {
        cout << getTurno() <<" " << counterplay <<" " << p_pos_actual <<" " << p_tirada <<" " << board1.boardvector[p_pos_nueva_N-1]->gettype() <<" " << board1.boardvector[p_pos_nueva_N-1]->Move(p_pos_nueva_N) << endl;
        fileout << getTurno() <<" " << counterplay <<" " << p_pos_actual <<" " << p_tirada <<" " << board1.boardvector[p_pos_nueva_N-1]->gettype() <<" " << board1.boardvector[p_pos_nueva_N-1]->Move(p_pos_nueva_N) << endl;
        numplayers[counterplay-1]->setPosicion(board1.boardvector[p_pos_nueva_N-1]->Move(p_pos_nueva_N));
        setTurno(aumentarTurno());
      }
      //check if the numbers of turns  is lower than the maxturn 
      if (getTurno() == board1.getmaxTruns())
      {
        cout << "The maximun number of turns has been reached... " << "(" << board1.getmaxTruns()-1 << ")" << endl;
        fileout << "The maximun number of turns has been reached... " << "(" << board1.getmaxTruns()-1 << ")" << endl;
        break;
      }
      //Determines winner to the player, if his position equals to the total Tiles
      else if (numplayers[counterplay-1]->getPosicion() == board1.getTiles())
      {
        cout << "-- GAME OVER --" << endl;
        cout << "Player " << counterplay << " is the winner!!!" << endl;
        fileout << "-- GAME OVER --" << endl;
        fileout << "Player " << counterplay << " is the winner!!!" << endl;
        break;
      }
          //check if the counter is equal to the number of players to reset
      if(counterplay == players)
      {
        counterplay = 1;
      }
      else
      {
        counterplay = counterplay + 1;
      }

    }
    //check if the variable opcion is E to end the program
    else if (opcion == 'E')
    {
      cout << "Thanks for playing!!!" << endl;
      fileout << "Thanks for playing!!!" << endl;
      break;
    }
    //check if the variable opcion is not E or C
    else if(opcion != 'E' || opcion != 'C')
    {
      cout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
      fileout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
    } 
    countermatrix = countermatrix+1;
    
  }

}

void MyGame::readfile(string file)
{
  ifstream fp(file); //create the variable of type ofstream and open the file text that contains character C and E to determine the numbers of turns rolling in the game

  for (int j = 0; j < 30; j++)
  {
    fp >> matriz[0][j]; //assigns the contents of the file to the matrix
  }
  fp.close(); //close the file
}