//Created by Ryan Guggenbuehl
//Created on 9/10/16
//Getting to know you
//Questions that procede through nested if else statements




#include <iostream>
#include <string>
#include <math.h>
using namespace std;



int main(){
    string answer1 = "";
    string answer2 = "";
    string answer3 = "";
    string answer4 = "";
    
    
    cout << "Do you like the outdoors? yes/no:"<< endl;//First question
    cin >> answer1;
    
    if(answer1 == "yes"){
        cout << "Do you like to run? yes/no: " << endl;//second question if answerd yes
        cin >> answer2;
    
        if (answer2 == "yes" ){
            cout << "You are a horse!" << endl;//Animal if answerd yes
        }
       
        else{ 
            cout << "You are a turtle!"<< endl;//Animal if answerd no
        }
    }
    
    
    else{ 
        cout << "Do you like cheese?" << endl;//second question if answerd no
        cin >> answer3;
        
        
        if( answer3 == "yes"){
            cout << "You are a mouse!" << endl;//Third animal if answerd yes
        }
        
        
        else{ 
            cout << "Do you like to swim?"<< endl;//Third question if answerd no
            cin >> answer4;
            if (answer4 == "yes"){
                cout << "You are a fish!" << endl;//Third answer if yes
            
            }
            else { 
                cout << "You are a cat!" << endl;//Third answer if no
            }
        }
    }
        
    
    return 0;

}