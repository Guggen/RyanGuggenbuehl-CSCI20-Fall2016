//Created by Ryan Guggenbuehl
//Created on 9/10/16
//Getting to know you




#include <iostream>
#include <string>
#include <math.h>
using namespace std;



int main(){
    string answer1 = "";
    string answer2 = "";
    string answer3 = "";
    string answer4 = "";
    
    
    cout << "Do you like the outdoors? yes/no:"<< endl;
    cin >> answer1;
    
    if(answer1 == "yes"){
        cout << "Do you like to run? yes/no: " << endl;
        cin >> answer2;
    
        if (answer2 == "yes" ){
            cout << "You are a horse!" << endl;
        }
       
        else{ 
            cout << "You are a turtle!"<< endl;
        }
    }
    
    
    else{ 
        cout << "Do you like cheese?" << endl;
        cin >> answer3;
        
        
        if( answer3 == "yes"){
            cout << "You are a mouse!" << endl;
        }
        
        
        else{ 
            cout << "Do you like to swim?"<< endl;
            cin >> answer4;
            if (answer4 == "yes"){
                cout << "You are a fish!" << endl;
            
            }
            else { 
                cout << "You are a cat!" << endl;
            }
        }
    }
        
    
    return 0;

}