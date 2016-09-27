#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class TemperatureConverter {
public:
    void SetTempFromKelvin(double kelvin);
    double GetTempFromKelvin();
    
    void SetTempFromFahrenheit(double fahrenheit);
    double GetTempAsFahrenheit();
    
    void SetTempFromCelcius(double celsius);
    double GetTempAsCelcius();
    
    TemperatureConverter();
    TemperatureConverter(double inputTemp);
    
    void PrintTemps();
    
private: 
    double kelvin_;
    
};

TemperatureConverter::TemperatureConverter(){
     kelvin_ = 0;
     return;
}
TemperatureConverter::TemperatureConverter(double inputTemp){
    kelvin_ = inputTemp;
    return;
}

void TemperatureConverter::SetTempFromKelvin(double kelvin){
    kelvin_ = kelvin;
}

double TemperatureConverter::GetTempFromKelvin(){
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelcius(double celsius){
    kelvin_ = celsius  + 273.15;
    return;
}
double TemperatureConverter::GetTempAsCelcius(){
    
    return kelvin_-273.15;
}

void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit){
    kelvin_ = (5 *(fahrenheit-32)/9 + 273.15);
}
double TemperatureConverter::GetTempAsFahrenheit(){
    
    return (kelvin_-273.15)*9/5+32;
}


void TemperatureConverter::PrintTemps() {
    cout << "Temperature in K: " << GetTempFromKelvin() << endl;
    cout << "Temperature in C: " << GetTempAsCelcius() << endl;
    cout << "Temperature in F: " << GetTempAsFahrenheit() << endl<< endl;
    return;
}



