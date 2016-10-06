//Created by Ryan Guggenbuehl
//Created on 9/4/16
//Tax Program


#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    
    string name = "";
    string filingStatus = "";
    double grossWages = 0;
    double taxWithheld = 0;
    double taxOwed = 0;
    double taxRefund = 0;
    double taxDue = 0;
    
    
    
    
    cout << "Enter Name: "<< endl;//User input Name
    getline(cin, name);
    
    
    cout << "Married? Enter Yes or No: " << endl;//User input Single/Married
    cin >> filingStatus;
    
    cout << "Enter total wages: $" << endl;//User input Salary
    cin >> grossWages;
    
    cout << "Taxes Withheld: $" << endl << endl;//User input Single/Married
    cin >> taxWithheld;
    
    
    
    
    if (filingStatus == "yes" || filingStatus == "Yes" || filingStatus == "YES")//If married
    {    
        if( grossWages - 3900 - 6100 > 0){
            
            if (0 <= grossWages && grossWages <= 17850){
                taxOwed = (grossWages)* .1;
            }
            if ( 17851 <= grossWages && grossWages <= 72500){
                taxOwed = 1785 + (grossWages-17850)* .15;
            }
            if ( 72501 <= grossWages){
                taxOwed = 9982.5 + (grossWages-72500)* .28;
            }
        }
        else { 
            taxOwed = 0;
        }
    }
    else                                               //If single
    {   /* cout<<grossWages - 3900-6100<<endl;*/
        
        if( grossWages - 3900 - 6100 > 0)
         {   
            if ( 8926 <= grossWages && grossWages <= 36250){
                taxOwed = 892.50 + (grossWages-8926)* .15;
            }
            if ( 36251 <= grossWages && grossWages <= 87850){
                taxOwed = 4991.25 + (grossWages-36250)* .25;
            }
            if ( 97851 <= grossWages){
                taxOwed = 17891.25 + (grossWages-87850)* .28;
            }
        }
        else{
            taxOwed = 0;
        }
        
    }
    
    if (taxOwed - taxWithheld > 0){         //Taxes Due
        taxDue = taxOwed - taxWithheld;
        taxRefund = 0;
    }
    
    else {                                  //Taxes Refunded
        taxRefund = taxWithheld-taxOwed;
        taxDue = 0;
    }
    
    
    cout << "Name: " << name << endl 
         << "Total tax owed: $" << taxDue  << endl
         << name <<" is entitled to a REFUND of: $"<<  taxRefund   << endl;
    
    return 0;
    
}