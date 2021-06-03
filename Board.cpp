/*----------------------------------------------------------
 * Programación orientada a objetos
 * Autor: Armando Genis Alvarez A01654262
 *        Jesús Daniel Rivas Nuño A01655181
 * archivo: Board.cpp
 * TC1030-T2
 *----------------------------------------------------------*/
#include "Board.h"

Board::Board(){
    this->Tiles = 30; //default number of Tiles
    this->Snakes = 3;   //default number of Snakes
    this->Laders = 3;   //default number of Laders
    this->maxturns = 18;    //default number of maxtruns
    this->rewards = 3; 
    this->penalty = 3; 

}
//update the number of Tiles 
void Board::setTiles(int NumTiles){
    this->Tiles = NumTiles;  
}
//update the number of Laders
void Board::setladers(int Numladers){
    this->Laders = Numladers; 
}
//update the number of snakes
void Board::setsnakes(int NumSnackes){
    this->Snakes=NumSnackes;
}
//update the number of maximum turns 
void Board::setmaxTurns(int turns){
    this->maxturns = turns; 
}
//get the number of Tiles 
int Board::getTiles(){
    return this->Tiles;
}
//get the number of maximum turns  
int Board::getmaxTruns(){
    return this->maxturns; 
}

void Board::setpenalty(int penalty){
    this->penalty=penalty; 
}

void Board::setreward(int reward){
    this->rewards=reward; 
}

void Board::creteboard(){

    char Board[Tiles]; //update the board
    
    //update the positions of normal tiles 
    for (int i = 0; i < Tiles; i++)
    {
  
        if(board[i] !='L' || board[i] !='S' )
        {
            board[i] = 'N';
            boardvector[i] = new Normal();
        }

    }

    //update the positions of Lader tiles 
    for (int i = 1; i <= Laders; i++)
    { 
        int valorl = rand() % (Tiles-3);
        while(board[valorl] =='L' || board[valorl] =='S')
        {
            valorl = rand() % (Tiles-3);
        }
        board[valorl] = 'L';
        boardvector[valorl] = new Lader();
        boardvector[valorl]->setmove(this->rewards);
    }

    //update the positions of snake tiles 
    for (int i = 0; i < Snakes; i++)
    {
        int valorl2 = rand() % (Tiles-3);
        while(board[valorl2] =='L' || board[valorl2] =='S')
        {
            valorl2 = rand() % (Tiles-3);
        }
        board[valorl2] = 'S';
        boardvector[valorl2] = new Snake();
        boardvector[valorl2]->setmove(this->penalty);
        
    }


    //print the board with the settings 
    for (int i = 0; i < Tiles; i++)
    {
        cout<< board[i] << " "; 
    }

     
}

//update the settings like number of tiles, snakes, Laders and maximun turns
void Board::setsettings()
{
    int numTiles; 
    int numSnakes;
    int numLaders;
    int maxturn;
    cout << "---¡Create you own game---"<< endl; 
    cout << "\n" << endl;
    cout << "BOARD SETTINGS: "<< endl;
    cout << "Numbers of Tiles? : "; 
    cin >> numTiles; 
    setTiles(numTiles); 
    cout << "Numbers of Snakes? : ";
    cin >> numSnakes; 
    setsnakes(numSnakes);
    cout << "Numbers of Laders? : ";
    cin >> numLaders;    
    setladers(numLaders);
    cout << "Numbers of turn? : ";
    cin >> maxturn; 
    setmaxTurns(maxturn); 
    cout << "SPECIAL TILES SETTINGS: "<< endl;
    int penalty, reward; 
    cout << "Penalty: Number of squares to go back if the player fall into a snake box: ";
    cin >> penalty; 
    setpenalty(penalty);
    cout << "Reward: number of squares that are advanced if the player fall on a ladder:  ";
    cin >> reward; 
    setreward(reward);

     


}




