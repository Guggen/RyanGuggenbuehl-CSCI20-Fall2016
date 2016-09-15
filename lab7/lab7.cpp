#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void song(string animal, string sound){

    cout<< "Old MacDonald had a farm,"<< endl
        << "E-I-E-I-O." << endl << endl
        <<"And on his farm he had some " << animal << ","<< endl
        << "E-I-E-I-O." << endl << endl
        << "With a " << sound<<", "<< sound<< " here," << endl
        << "And a " << sound<< ", " << sound <<"there," << endl
        << "Here a " << sound << ", there a " << sound <<","<< endl
        << "Everywhere a " << sound << ", " << sound << "," << endl << endl
        << "Old MacDonald had a farm, " << endl
        << "E-I-E-I-O." << endl<<endl;
}

int main(){
    
    song("chicks","chick");
    song("duck","quack");
    song("turkey","gobble");
    song("pig","oink");
    song("cow","moo");
    song("cat","meow");
    song("mule","heehaw");
    song("dog","bow wow");
    song("turtle","nerp, nerp");
}





