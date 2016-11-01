#include <iostream>
#include <string>
#include <math.h>
#include <cstring>
#include <cctype>
using namespace std;

int main(){ 
    const int fNUM = 11;
    const int lNUM = 21;
    char firstName[fNUM]="";
    char lastName[lNUM]="";
    int i = 0;
    int j = 0;
    int firstcount = i;
    int lastcount = j;
    
    cout<< "Enter your name: "<< endl;
    cin >>firstName>>lastName;
    cout << endl;
    
    
    for(i=0; firstName[i] != '\0'; ++i){ //Loop that allows the counting of the array using i
        
        
    }
    for(j=0; lastName[j] != '\0'; ++j){//Loop that allows the counting of the array using j
        
        
    }
    
    if(i > 10){
            
            cout << "First name too large."<< endl;
        }
    if(j > 20){
        cout << "Last name too large."<< endl;
        }
        
    if(firstName[i] == lastName[i]){
        cout << "First and Last name are the same."<< endl;
    }
    
    
    cout << "User names available: "<< endl;
    
    
    for(i = 0; i < 2; ++i){
        
    cout << firstName[i];
    }
    
    for(j = 0; j < 5; ++j){
    cout << lastName[j];
    }
    cout << endl;
    for(i = 0; i < 4; ++i){
    cout << firstName[i];
    }
    
    for(j = 0; j < 5; ++j){
    cout << lastName[j];
    }
    cout << endl;
    for(i = 0; i < 1; ++i){
    cout << firstName[i];
    }
    
    for(j= 0; j < 5; ++j){
    cout << lastName[j];
    }
    
    
    return 0;   
}