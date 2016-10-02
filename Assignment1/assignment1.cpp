//Created by: Ryan Guggenbuehl 
//Created on: 9/16/16
//Income program

#include <iostream>
#include <string>
using namespace std;

int main(){ 
    string name = "";//Variable deffinitions
    float hrWage = 0;
    int weeklyHrs = 0;
    int salary = 0;
    int weeks = 4;
    int months = 12;
    float taxedSalary = 0;
    
    cout << "Enter name: ";//Persons name
    getline(cin, name);
    
    cout << "Enter hourly wage: ";//Persons Wage 
    cin >> hrWage;
    
    cout << "Enter weekly hours: ";//Persons hours
    cin >> weeklyHrs;
    
    salary = hrWage * weeklyHrs * weeks * months;//Salary equation
    taxedSalary = salary -salary*0.17;
    
    cout << "Name: " << name <<". " << "Weekly Hours: " << weeklyHrs << ". " //Viewable Output
    << "Hourly Wage: $" << hrWage << ". "<< "Gross pay: $" << salary << ". "<< "Net pay: $" 
    << taxedSalary << ".";
}
    
    