#include <iostream>
#include <string>
using namespace std;

struct MonsterOne{
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
    
};

struct MonsterTwo{
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
    
};

struct MonsterThree{
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
    
};


int main () {
    MonsterOne monster1;
    
    
    MonsterTwo monster2;
    
    monster2.name = "PickleJuice";
    monster2.head = "Happy";
    monster2.eyes = "Vegitas";
    monster2.ears = "Spritem";
    monster2.nose = "Vegitas";
    monster2.mouth = "Spritem";
    
    
    MonsterThree monster3;
    
    monster3.name = "Zumba";
    monster3.head = "Franken";
    monster3.eyes = "Wackus";
    monster3.ears = "Spritem";
    monster3.nose = "Spritem";
    monster3.mouth = "Wackus";
    
    cout << "Enter Name: ";
    cin >> monster1.name; 
    
    cout << "Enter head: ";
    cin >> monster1.head;
    
    cout << "Enter eyes: ";
    cin >> monster1.eyes;
    
    cout << "Enter ears: ";
    cin >> monster1.ears;
    
    cout << "Enter nose: ";
    cin >> monster1.nose;
    
    cout << "Enter mouth: ";
    cin >> monster1.mouth;
    
    cout <<endl<<endl<< monster1.name << ": "<< monster1.head << ", " 
    << monster1.eyes << ", " << monster1.ears << ", "
    << monster1.nose << ", " << monster1.mouth<<"."<< endl<< endl;
    
    cout << monster2.name << ": "<< monster2.head << ", " 
    << monster2.eyes << ", " << monster2.ears << ", "
    << monster2.nose << ", " << monster2.mouth<<"."<< endl<<endl;
    
    cout << monster3.name << ": "<< monster3.head << ", " 
    << monster3.eyes << ", " << monster3.ears << ", "
    << monster3.nose << ", " << monster3.mouth<<"."<< endl<<endl;
    
}