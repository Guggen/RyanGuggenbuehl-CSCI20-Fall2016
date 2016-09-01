#include <iostream>
#include <string>
using namespace std;

int main() {
   string userName = "";
   int userAge = 0;
   string favColor = "";
   char favNum = 0;
   float decNum = 0;

   cout << "Enter your name: ";
  cin >> userName; 
   cout << "Enter your age: ";
   cin >> userAge;
   cout << "Enter your favorite color: ";
   cin >> favColor;
   cout << "Enter a random number with a decimal under 50: ";
   cin >> decNum;
   cout << "Enter your favorite single digit Number:";
   cin >> favNum;
   
   cout << "Name: " << userName << endl;
   cout << "Age: " << userAge << endl;
   cout << "Color: " << favColor << endl;
   cout << "Decimal Number: " << favColor << endl;
   
   
   cout << " My name is " << userName << ".";
   cout << " I am " << userAge << " years old.";
   cout << " My hair color is " << favColor << ".";
   cout << " I will live " << decNum << " more years and I act like I am " << favNum << " years old.";
  

   return 0;
}