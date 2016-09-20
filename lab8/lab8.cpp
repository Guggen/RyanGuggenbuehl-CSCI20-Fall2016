#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double ToKilo(double pounds)
{
    double kilograms = 0.0;
    kilograms = pounds / 2.2046226218;
    return kilograms;
}

double ToPounds(double kilograms)
{
    double pounds = 0.0;
    pounds = kilograms * 2.2046226218;
    return pounds;
}


int main()
{
    double pounds = 0.0;
    double kilograms = 0.0;
    double number = 0.0;
    double number2 = 0.0;
    
    cout << "Enter Kilograms: " << endl;
    cin >> kilograms;
    ToPounds(kilograms);
    number2 = ToPounds(kilograms);
    cout << number2 << "lb" << endl;
    
    
    
    cout << "Enter pounds: " << endl;
    cin >> pounds;
    ToKilo(pounds);
    number = ToKilo(pounds);
    cout << number << "kg" << endl;
    
}