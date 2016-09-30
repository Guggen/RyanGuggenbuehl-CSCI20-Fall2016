//Ryan Guggenbuehl
//Income program

#include <iostream>
#include <string>
using namespace std;

int main(){ 
    string name = "";
    float hrWage = 0;
    int weeklyHrs = 0;
    int salary = 0;
    int weeks = 4;
    int months = 12;
    float taxedSalary = 0;
    
    cout << "Enter name: ";
    getline(cin, name);
    
    cout << "Enter hourly wage: ";
    cin >> hrWage;
    
    cout << "Enter weekly hours: ";
    cin >> weeklyHrs;
    
    salary = hrWage * weeklyHrs * weeks * months;
    taxedSalary = salary -salary*0.17;
    
    cout << "Name: " << name <<". " << "Weekly Hours: " << weeklyHrs << ". " 
    << "Hourly Wage: $" << hrWage << ". "<< "Gross pay: $" << salary << ". "<< "Net pay: $" 
    << taxedSalary << ".";
}
    
    