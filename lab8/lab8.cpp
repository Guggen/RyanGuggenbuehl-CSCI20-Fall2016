#include <iostream>
#include <string>
#include <math.h>
using namespace std;

double ToKilo(double pounds)//Pounds to kilo function
{
    double kilograms = 0.0;
    kilograms = pounds / 2.2046226218;
    return kilograms;
}

double ToPounds(double kilograms)//Kilograms to pounds function
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
    
    cout << "Enter Kilograms: " << endl;//Kilograms to pounds
    cin >> kilograms;
    ToPounds(kilograms);
    number2 = ToPounds(kilograms);
    cout << "Converted " << kilograms <<"kg to "<< number2 << "lbs." << endl;
    
    
    
    cout << "Enter pounds: " << endl;//Pounds to kilo
    cin >> pounds;
    ToKilo(pounds);
    number = ToKilo(pounds);
    cout << "Converted " << pounds <<"lbs to "<< number << "kgs." << endl;
    
}