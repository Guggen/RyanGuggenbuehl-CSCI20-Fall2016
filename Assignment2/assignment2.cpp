#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class DistanceConverter {
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

DistanceConverter::DistanceConverter(){
     miles_ = 0;
     return;
}
DistanceConverter::DistanceConverter(double inputDist){
    miles_ = inputDist;
    return;
}

void DistanceConverter::SetDistanceFromMiles(double miles){
    miles_ = miles;
}

double DistanceConverter::GetDistanceFromMiles(){
    return miles_;
}

void DistanceConverter::SetDistanceFromYards(double yards){//FIx
    miles_ = yards  / 1760;
    return;
}
double DistanceConverter::GetDistanceAsYards(){
    
    return miles_*1760;
}

void DistanceConverter::SetDistanceFromMeters(double meters){
    miles_ = meters / 1609.34;
}
double DistanceConverter::GetDistanceAsMeters(){
    
    return miles_*1609.34;
}

void DistanceConverter::SetDistanceFromFeet(double feet){
    miles_ = feet / 5280;
}
double DistanceConverter::GetDistanceAsFeet(){
    
    return miles_* 5280;
}

void DistanceConverter::SetDistanceFromInches(double inches){
    miles_ = inches / 63360;
}
double DistanceConverter::GetDistanceAsInches(){
    
    return miles_* 63360;
}



void DistanceConverter::PrintDist() {
    cout << "Distance in Miles: " << GetDistanceFromMiles() << endl;
    cout << "Distance in Yards: " << GetDistanceAsYards() << endl;
    cout << "Distance in Meters: " << GetDistanceAsMeters() << endl;
    cout << "Distance in Feet: " << GetDistanceAsFeet() <<endl;
    cout << "Distance in Inches: " << GetDistanceAsInches() << endl << endl;
    return;
}



int main ()
{
    DistanceConverter dist1; //testing default constructor
    DistanceConverter dist2(274); //testing overloaded constructor
    
    dist1.PrintDist();
    dist2.PrintDist();
    
    dist1.SetDistanceFromMiles(1); //testing mutator function
    cout<<dist1.GetDistanceFromMiles()<<endl;//testing accessor function
    dist1.PrintDist();
    
    
    
    dist2.SetDistanceFromMeters(16);
    cout<<dist2.GetDistanceAsMeters()<<endl;
    dist2.PrintDist();
    
    dist2.SetDistanceFromYards(20); //testing other functions
    cout<<dist2.GetDistanceAsYards()<<endl;
    dist2.PrintDist();
    
    dist2.SetDistanceFromInches(100); //testing other functions
    cout<<dist2.GetDistanceAsMeters()<<endl;
    dist2.PrintDist();
    
    dist2.SetDistanceFromMeters(1);
    cout<<dist2.GetDistanceAsMeters()<<endl;
    dist2.PrintDist();
    
    return 0;
}