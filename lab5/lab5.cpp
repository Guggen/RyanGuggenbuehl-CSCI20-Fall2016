#include <iostream>
#include <string>
using namespace std;

struct Monster{
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
    
};

int main () {
    Monster features;
    
    cout << "Enter Name: ";
    getline(cin, features.name); 
    
    cout << "Enter head: ";
    cin >> features.head;
    
    cout << "Enter eyes: ";
    cin >> features.eyes;
    
    cout << "Enter ears: ";
    cin >> features.ears;
    
    cout << "Enter nose: ";
    cin >> features.nose;
    
    cout << "Enter mouth: ";
    cin >> features.mouth;
    
    cout << features.name << ": "<< features.head << ", " 
    << features.eyes << ", " << features.ears << ", "
    << features.nose << ", " << features.mouth<<"."<< endl;
    
}