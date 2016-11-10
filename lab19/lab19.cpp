#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <iomanip>
using namespace std;


int main(){
    
    
    int numbers[4][4];
    ifstream inFS; //input file stream
    ofstream outFS;
    int i = 0;
    int j = 0;
    int sum = 0;
    int sum2 = 0;

    inFS.open("textInput.txt");
    outFS.open("textOutput.txt");


    if (!inFS.is_open()) {
      cout << "Could not open file textIntput.txt." << endl;
      return 1; // 1 indicates error
   }

   

    for(i = 0; i < 3; ++i){//Loop that sums the rows up.
        for(j = 0; j < 4; ++j){
        
        
        inFS >> numbers[i][j];//Reads input file.
        outFS <<setw(3) << left<<  numbers[i][j];//Outputs input numbers.
        sum = sum + numbers[i][j];
        
        }
        
        outFS << setw(3) << left << sum << endl;
        sum = 0;
        
        
    }
    
    
   for(j = 0; j < 4; ++j){//Loop that runs that sums the colums up.
       for(i = 0; i < 3; ++i){
           sum2 = sum2 + numbers[i][j];
      
       }
       outFS << setw(3) << left << sum2;
        sum2 = 0;
   }
   
 
 
 
 return 0;  
}