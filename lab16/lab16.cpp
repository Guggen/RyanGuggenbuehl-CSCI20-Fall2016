//Ryan Guggenbuehl
//This program allows you to order food using an array




#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    
    
    const int NUM = 10;
    string menu[NUM];
    int amount[NUM];
    float cost[NUM];
    int foodNum = 20;
    int i = 0;
    float sumCost = 0;
    
    
    menu[0]="Beer";       amount[0]=foodNum;      cost[0]=3.50;
    menu[1]="Coke";       amount[1]=foodNum;      cost[1]=2.00;
    menu[2]="Pepsi";      amount[2]=foodNum;      cost[2]=2.00;
    menu[3]="Water";      amount[3]=foodNum;      cost[3]=0.50;
    menu[4]="Burger";     amount[4]=foodNum;      cost[4]=5.00;
    menu[5]="Fries";      amount[5]=foodNum;      cost[5]=2.75;
    menu[6]="Salad";      amount[6]=foodNum;      cost[6]=3.25;
    menu[7]="Steak";      amount[7]=foodNum;      cost[7]=8.50;
    menu[8]="Salmon";     amount[8]=foodNum;      cost[8]=10.00;
    menu[9]="Pizza";      amount[9]=foodNum;      cost[9]=9.50;
    
    
    
        cout << "What would you like to order? Enter the cooresponding number for your food seperated by spaces." << endl;
        cout << "1: Beer 2: Coke 3: Pepsi 4: Water 5: Burger 6: Fries 7: Salad 8: Steak 9: Salmon 10: Pizza. "<< endl 
        << "To end order type: 99" << endl;
        cin >> i;
        
    while(i>0 && i<10){//Loop that allows you to continue ordering until you're done.
            
            amount[i-1]=foodNum-1;
            sumCost = sumCost + cost[i-1];
            cout << "You chose a " << menu[i-1]<<". This cost "<< cost[i-1]<<". There are "<<amount[i-1]<<" "<<menu[i-1]<<"s left"<< endl
            <<"You total cost is now: $"<<sumCost<< endl<< endl;
            
            
        cout << "What else would you like to order? Enter the cooresponding number for your food seperated by spaces." << endl;
        cout << "1: Beer 2: Coke 3: Pepsi 4: Water 5: Burger 6: Fries 7: Salad 8: Steak 9: Salmon 10: Pizza. "<< endl 
        << "To end order type: 99" << endl;
        cin >> i;
            

        
    }
    
    
    
    
    
    
    
    return 0;
}