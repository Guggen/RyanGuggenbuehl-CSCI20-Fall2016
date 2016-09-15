#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void Chorus1(string animal){

    cout<< "Old MacDonald had a farm,"<< endl
        << "E-I-E-I-O." << endl << endl
        <<"And on his farm he had some " << animal << ","<< endl
        << "E-I-E-I-O." << endl << endl;
        
}

void Chorus2(string sound){
    cout<< "With a " << sound<<", "<< sound<< " here," << endl
        << "And a " << sound<< ", " << sound <<" there," << endl
        << "Here a " << sound << ", there a " << sound <<","<< endl
        << "Everywhere a " << sound << ", " << sound << "," << endl << endl
        << "Old MacDonald had a farm, " << endl
        << "E-I-E-I-O." << endl<<endl;
}

int main(){
    
    Chorus1("chicks");
    Chorus2("chick");
    Chorus1("duck");
    Chorus2("quack");
    Chorus1("turkey");
    Chorus2("gobble");
    Chorus1("pig");
    Chorus2("oink");
    Chorus1("cow");
    Chorus2("moo");
    Chorus1("cat");
    Chorus2("meow");
    Chorus1("mule");
    Chorus2("heehaw");
    Chorus1("dog");
    Chorus2("bow wow");
    Chorus1("turtle");
    Chorus2("nerp, nerp");
}





