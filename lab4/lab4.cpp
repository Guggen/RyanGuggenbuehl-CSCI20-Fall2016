#include <iostream>
#include <string>
using namespace std;

int main() {
    int cents = 0;
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int pennie = 0;
    cout<< "You will be charged 10.9% fee from the amount deposited."<< endl;
    cout << "   Deposited amount of money: ¢";
    cin >> cents; 
    
    
    quarter = cents/25;
    cents = cents%25;
    dime = cents/10;
    cents = cents%10;
    nickel = cents/5;
    cents = cents%5;
    pennie = cents/1;
    cents = cents%1;
    
    cout<< "You have deposited "<< quarter <<" quarters, "<< dime << " dimes, "<< nickel << " nickels, "<< " and "<< pennie << " pennies."<< endl;
    cout<< "    The amount deposited: $"<< (quarter*25+dime*10+nickel*5+pennie*1)/100.00<<" After fee: $"<< (quarter*25+dime*10+nickel*5+pennie*1)/100.00- .109* (quarter*25+dime*10+nickel*5+pennie*1)/100.00;

    
}