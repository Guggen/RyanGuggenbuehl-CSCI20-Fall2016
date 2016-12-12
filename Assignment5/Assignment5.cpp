//Created by Ryan Guggenbuehl
//Created on 12/8/16
//Rock Paper Scissors
//This program compares your choice against the computers random choice and determines wether you have won, tied, or lost.


#include <iostream>
#include <string>
#include <math.h>
#include <time.h>
#include <cctype>
using namespace std;

class RockPaperScissors {
public:
    RockPaperScissors(int gameAmount, int computerSelection);//Sets the random seed for the game
    RockPaperScissors();
    void SetGameCount(int gameAmount);//User chooses how many games are played
    int GetGameCount();//Returns game count
    int GetComputerChoice();
    
private:
    int gameCount_; //Amount of games played
    int computerChoice_;//Computer choice
};



RockPaperScissors::RockPaperScissors() {//Default constructor if no game ammount is chosen.
 gameCount_ = 0;
 return;
}

RockPaperScissors::RockPaperScissors(int gameAmount, int computerSelection) {//Overloaded constructor that 
    gameCount_ = gameAmount;
    srand((int)time(0));              //Random generator
    
    computerChoice_ = computerSelection;
    
}

int RockPaperScissors::GetComputerChoice() {//Returns computer choice to compare against users choice.
    
    return computerChoice_;
}


int main(){
    
    
    
    int winCount  = 0;//How many times user has won
    int loseCount = 0;//How many times user has lost.
    int tieCount  = 0;//How many times user has tied.
    int win       = 0;//Camparison variable to detirmine if game is won.
    int lost      = 0;//Comparison variable to detirmine if game is lost.
    int amount;//User input for game ammount
    int i         = 0;//Looping varaible
    
    string choice1        = "Rock";//Choices for game
    string choice2        = "Paper";//Choices for game
    string choice3        = "Scissors";//Choices for game
    string computerChoice = "";//Strings for game
    string userChoice     = "";//Strings for game
    string userSelection  ="";//Strings for game
    string outcome        = "";//Strings for game
    string userName;//UserName
    
    
    
    cout << "Enter username: " << endl;//Username input
    cin >> userName;
    
    cout << endl;
        
    userName.at(0) = toupper(userName.at(0)); //Capitalizes users first letter.
    
    srand((int)time(0));              //Random generator that changes number each time loop is ran
    int computerNum = rand() % (3) + 1;
    
    
    
    cout << userName << ", How many games would you like to play, best out of 3, 5, or 7? If game is tied, an extra game is played: " << endl; // Output/Input for game ammount
    cin >> amount;
    
    cout << endl;
   
    
    RockPaperScissors game1;
    RockPaperScissors game2(amount,computerNum);
    
    
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
        
        
        
        cout << "Using the corresponding word, choose Rock, Paper, or Scissors."<< endl;//This is where the user choses their 
        cin >> userChoice;
        
        for(int i = 0; i < userChoice.length(); ++i){ //Lowers every letter of userchoice
            userChoice.at(i) = tolower(userChoice.at(i));
        }
        
    
        
        if(userChoice == "rock"){         //Assigns a number to a string for rock, paper, or scissors.
        userSelection = choice1;
        }
        else if(userChoice == "paper"){
            userSelection = choice2;
        }
        else if(userChoice == "scissors"){
            userSelection = choice3;
        }
        
        
        if(computerNum == 1 && userChoice == "rock" || computerNum == 2 && userChoice == "paper" || computerNum == 3 && userChoice == "scissors") {//If statement for determining if tied
            tieCount = tieCount + 1;
            outcome = "tied";
            
        }
        else if(computerNum == 1 && userChoice == "paper" || computerNum == 2 && userChoice == "scissors" || computerNum == 3 && userChoice == "rock"){//If statement for determining if user won
            winCount = winCount + 1;
            outcome = "won";
            
        }
        else if (computerNum == 1 && userChoice == "scissors" || computerNum == 2 && userChoice == "rock" || computerNum == 3 && userChoice == "paper"){ //If statement for determining if user lost
            loseCount = loseCount + 1;
            outcome = "lost";
        }
        
        if (amount == 3 && winCount == 2 || amount == 5 && winCount == 3 || amount == 7 && winCount == 4){//If statement that breaks loop if user won.
            cout << "You chose "<< userSelection <<". "<<"Computer chose: " << computerChoice << endl
            << userName <<" Won best "<< winCount <<  " out of " << amount <<"."<< "                                                  "
            << "Won: "<< winCount << "  "<<"Tied: " << tieCount << "  " << "Lost: " << loseCount<<  endl<< endl;
            break;
        }
        else if (amount == 3 && loseCount == 2 || amount == 5 && loseCount == 3 || amount == 7 && loseCount == 4){//If statement that breaks loop if user lost.
            cout<< "You chose "<< userSelection <<". "<<"Computer chose " << computerChoice << endl 
            << "Computer won. "<<userName << " lost " << loseCount<< " out of " << amount <<"." <<  "                                                 "
            << "Won: " << winCount << "  " 
            << "Tied: " << tieCount << "  " << "Lost: " << loseCount<<  endl<< endl;
            
            
            break;
        }
        
        
        
        cout << userName <<" chose "<< userSelection << ". " <<"Computer chose " << computerChoice                          //Outputs everytime after user inputs choice
        <<". You "<< outcome <<" this round.                           "<< "Won: " << winCount << "  " 
        << "Tied: " << tieCount << "  " << "Lost: " << loseCount<< endl<<endl; 
    }
    
    
    
    
}