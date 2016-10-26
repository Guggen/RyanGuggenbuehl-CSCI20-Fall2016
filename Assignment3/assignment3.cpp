//Created by Ryan Guggenbuehl
//Created on 9/13/16
//Rock Paper Scissors
//This program compares your choice against the computers random choice and determines wether you have won, tied, or lost.


#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
using namespace std;

class RockPaperScissors {
public:


    
    void SetGameCount(int gameAmmount);
    int GetWinCount();
    
private:
    int gameCount_;
};



RockPaperScissors::RockPaperScissors(){
 gameCount_ = 0;
 return;
}
RockPaperScissors::RockPaperScissors(gameAmmount){
    gameCount_ = gameAmmount;
    return;
}



int main(){
    
    
    
    int winCount = 0;//Variables used throughout program
    int loseCount = 0;
    int tieCount = 0;
    /*int gameCount = 0;*/
    int win = 0;
    int lost = 0;
    int userNum = 0;
    
    string choice1 = "Rock";
    string choice2 = "Paper";
    string choice3 = "Scissors";
    string computerChoice = "";
    string userChoice = "";
    string outcome = "";
    
    
    
    cout << "How many games would you like to play, best out of 3, 5, or 7? If game is tied another game is played: " << endl; // Output/Input for game ammount
    
    
    RockPaperScissors game1;
    RockPaperScissors game2(cin >> gameAmmount);
    
    while(win <=winCount || lost  <= loseCount){//This loops repeats the game until the win or lost count is met.
    
    srand((int)time(0));              //Random generator
    int computerNum = rand() % (3) + 1;
    
    
    if(computerNum == 1){         //Assigns a number to a string for rock, paper, or scissors.
        computerChoice = choice1;
    }
    else if(computerNum == 2){
        computerChoice = choice2;
    }
    else if(computerNum == 3){
        computerChoice = choice3;
    }
    
    
    
    
        
        cout << "Using the corresponding number choose Rock: 1, Paper: 2, or Scissors: 3."<< endl;
        cin >> userNum;
        
        if(userNum == 1){         //Assigns a number to a string for rock, paper, or scissors.
        userChoice = choice1;
    }
    else if(userNum == 2){
        userChoice = choice2;
    }
    else if(userNum == 3){
        userChoice = choice3;
    }
        
        
        if(computerNum == 1 && userNum == 1 || computerNum == 2 && userNum == 2 || computerNum == 3 && userNum == 3) {//If statement for determining if tied
            tieCount = tieCount + 1;
            outcome = "tied";
            
        }
        else if(computerNum == 1 && userNum == 2 || computerNum == 2 && userNum == 3 || computerNum == 3 && userNum == 1){//If statement for determining if user won
            winCount = winCount + 1;
            outcome = "won";
        }
        else if (computerNum == 1 && userNum == 3 || computerNum == 2 && userNum == 1 || computerNum == 3 && userNum == 2){ //If statement for determining if user lost
            loseCount = loseCount + 1;
            outcome = "lost";
        }
        
        if (gameAmmount == 3 && winCount == 2 || gameAmmount == 5 && winCount == 3 || gameAmmount == 7 && winCount == 4){//If statement that breaks loop if user won.
            cout << "You chose "<< userChoice <<". "<<"Computer chose: " << computerChoice << endl
            << "You Won best "<< winCount <<  " out of " << gameAmmount <<"."<< "                                                  "
            << "Tied: " << tieCount << "  " << "Lost: " << loseCount<<  endl<< endl;
            break;
        }
        else if (gameAmmount == 3 && loseCount == 2 || gameAmmount == 5 && loseCount == 3 || gameAmmount == 7 && loseCount == 4){//If statement that breaks loop if user lost.
            cout<< "You chose "<< userChoice <<". "<<"Computer chose: " << computerChoice << endl 
            << "Computer won. You lost " << loseCount<< " out of " << gameAmmount <<"." <<  "                                                 "
            << "Won: " << winCount << "  " 
            << "Tied: " << tieCount << "  " << "Lost: " << loseCount<<  endl<< endl;
            
            
            break;
        }
        
        
    
    cout << "You chose "<< userChoice << ". " <<"Computer chose " << computerChoice                          //Outputs everytime after user inputs choice
    <<". You "<< outcome <<" this round.                           "<< "Won: " << winCount << "  " 
    << "Tied: " << tieCount << "  " << "Lost: " << loseCount<<  endl<< endl; 
    }
    
    
    
    
}