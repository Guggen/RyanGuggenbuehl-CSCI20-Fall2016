//Created by Ryan Guggenbuehl
//Created on 9/11/16
//Looping
//Questions that procede through nested if else statements




#include <iostream>
#include <string>
#include <math.h>
using namespace std;


void PrintMinutes(int minutes){
    cout << minutes << "minutes" << endl;
}

int main()
{
    
    int startingMinutes = 0;
    int startingHour = 2;
    
   
    
   
    
    for( int startingHour = 0; startingHour < 3; startingMinutes++){
        cout << startingHour<< ":"<< startingMinutes  << endl;
        
        if (startingMinutes > 59 ){
            startingMinutes = startingMinutes - 60;
            startingHour = startingHour + 1;
        }
    }
    
   int startHour = 0;
    int endHour = 0;
    int timeDiff = 0;
    int totalMinutes = 0;
    
    
    
    totalMinutes = timeDiff*60;
    
    
    cout << "Enter starting hour(Military Time): " << endl;
    cin >> startHour;
    
    cout << "Enter ending hour(Military Time) : " << endl;
    cin >> endHour;
    
    timeDiff = endHour - startHour;
    string meridian = "";
    
    for(int startHour = 0; startHour < timeDiff + 1; totalMinutes+=15)
    {
        meridian = (startHour < 12) ? "am" : "pm";
        cout << startHour << ":"<< totalMinutes  <<" " << meridian <<  endl;
        totalMinutes+=15;
        
        if (totalMinutes > 59  ){
            totalMinutes = totalMinutes - 60;
            
            startHour = startHour + 1;
        }
    }
    
    
    return 0;
    
}