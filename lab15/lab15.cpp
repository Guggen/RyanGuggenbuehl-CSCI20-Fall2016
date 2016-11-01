//Ryan Guggenbuehl
//This program allows you to order food using an array




#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    
    const int Num = 10;
    string menu[Num] {"Beer", "Coke", "Pepsi","Water", "Burger", "Fries", "Salad", "Steak", "Salmon", "Pizza"}; //The array storing the food.
    int amount[Num];
    int numFood;
    int i = 0;
    
    
    cout << "What would you like to order? Enter the cooresponding number for your food seperated by spaces." << endl;
        cout << "1: Beer 2: Coke 3: Pepsi 4: Water 5: Burger 6: Fries 7: Salad 8: Steak 9: Salmon 10: Pizza. "<< endl 
        << "To end order type: 99" << endl;
        cin >> i;
        cout << "You chose a " << menu[i-1]<<". " << endl<< endl;
        
            
    while(i>0 && i<10){//Loop that allows you to continue ordering until you're done.
    
    
    
    
            cout << "What would you like to order? Enter the cooresponding number for your food seperated by spaces." << endl;
        cout << "1: Beer 2: Coke 3: Pepsi 4: Water 5: Burger 6: Fries 7: Salad 8: Steak 9: Salmon 10: Pizza. "<< endl 
        << "To end order type: 99" << endl;
        cin >> i;
            cout << "You chose a " << menu[i-1]<<". " << endl<< endl;
            
        
            
        
         
        
    }
    
    
    
    return 0;
}