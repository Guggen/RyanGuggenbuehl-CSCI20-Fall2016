//Created by: Ryan Guggenbuehl 
//Created on: 9/29/16
//Distance Conversion programm


#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class DistanceConverter { //Class for all the functions that will be used for each unit conversion
public:
    void SetDistanceFromMiles(double miles);
    double GetDistanceFromMiles();
    
    void SetDistanceFromYards(double yards);
    double GetDistanceAsYards();
    
    void SetDistanceFromMeters(double meters);
    double GetDistanceAsMeters();
    
    void SetDistanceFromFeet(double feet);
    double GetDistanceAsFeet();
    
    void SetDistanceFromInches(double inches);
    double GetDistanceAsInches();
    
    DistanceConverter();
    DistanceConverter(double inputDist);
    
    void PrintDist();
    
private: 
    double miles_;
    
};

DistanceConverter::DistanceConverter(){//Default constructor for when no value is inputed
     miles_ = 0;
     return;
}
DistanceConverter::DistanceConverter(double inputDist){//Overloaded Constructer accepts an inputed value
    miles_ = inputDist;
    return;
}

void DistanceConverter::SetDistanceFromMiles(double miles){
    miles_ = miles;
}

double DistanceConverter::GetDistanceFromMiles(){
    return miles_;
}

void DistanceConverter::SetDistanceFromYards(double yards){//Yards conversion equations
    miles_ = yards  / 1760;
    return;
}
double DistanceConverter::GetDistanceAsYards(){
    
    return miles_*1760;
}

void DistanceConverter::SetDistanceFromMeters(double meters){//Meters conversion equations
    miles_ = meters / 1609.34;
}
double DistanceConverter::GetDistanceAsMeters(){
    
    return miles_*1609.34;
}

void DistanceConverter::SetDistanceFromFeet(double feet){//Feet conversion equations
    miles_ = feet / 5280;
}
double DistanceConverter::GetDistanceAsFeet(){
    
    return miles_* 5280;
}

void DistanceConverter::SetDistanceFromInches(double inches){//Inches conversion equations
    miles_ = inches / 63360;
}
double DistanceConverter::GetDistanceAsInches(){
    
    return miles_ * 63360;
}



void DistanceConverter::PrintDist() {//Output function for when conversions are computed
    cout << "Distance in Miles: " << GetDistanceFromMiles() << endl;
    cout << "Distance in Yards: " << GetDistanceAsYards() << endl;
    cout << "Distance in Meters: " << GetDistanceAsMeters() << endl;
    cout << "Distance in Feet: " << GetDistanceAsFeet() <<endl;
    cout << "Distance in Inches: " << GetDistanceAsInches() << endl << endl;
    return;
}



int main ()
{
    int number = rand()%300 + 1;
    DistanceConverter dist1; //testing default constructor
    DistanceConverter dist2(number); //testing overloaded constructor
    
    cout<<"Distance Converter test with no input: 0 "<< endl;
    dist1.PrintDist();
    cout<<"Distance Converter test with random input: "<< number<< endl;
    dist2.PrintDist();
    
    dist1.SetDistanceFromMiles(1); //testing mutator function
    cout<<"Miles: " << dist1.GetDistanceFromMiles()<<endl;
    dist1.PrintDist();
    
    
    
    dist2.SetDistanceFromMeters(16);//Meter unit input
    cout<<"Meters: " << dist2.GetDistanceAsMeters()<<endl;
    dist2.PrintDist();
    
    dist2.SetDistanceFromYards(20); //Yard unit input
    cout<<"Yards: " << dist2.GetDistanceAsYards()<<endl;
    dist2.PrintDist();
    
    dist2.SetDistanceFromInches(100); //Inches unit input
    cout<<"Inches: " << dist2.GetDistanceAsMeters()<<endl;
    dist2.PrintDist();
    
    dist2.SetDistanceFromMeters(1); //Meter unit input
    cout<<"Meters: " << dist2.GetDistanceAsMeters()<<endl;
    dist2.PrintDist();
    
    return 0;
}