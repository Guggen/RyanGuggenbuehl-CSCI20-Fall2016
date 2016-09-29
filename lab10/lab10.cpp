#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    
    cout << "If the statement ends with 0 then it is lies, and if it ends with 1 the statement is the truth." << endl << endl;
    int suzyAge = 25;
    int johnAge = 21;
    cout << "Suzy is younger than John: " << (suzyAge < johnAge) << endl << endl;
    
    int x = 7;
    int y = 7;
    cout << x << " is greator than or equal to "  << y <<": "<< (x >=y) <<endl << endl;
    
    int a = 1;
    int b = 9;
    cout << a <<" is equal to "<< b <<": " << (a == b) << endl << endl;
    
    int limit = 20;
    int count = 10;
    cout << limit << " multiplied by " << count << " and divided by 2 is greator than 0: " << ((limit*count)/2 > 0) << endl << endl;
    
    
    int t = -4;
    int z = 0;
    cout<< t << " is greator than 5 or " << z << " is less than 2: "<<(t > 5 || z < 2) << endl << endl;
    
    
    int variable = -5;
    cout<< variable << " is never greator than 0: " << (!(variable >0)) <<endl << endl;
    
    
    a = 16;
    cout<< a << " divided by 4 is less than 8 and " << a << " is greator than or equal to 4: " <<(a/4 < 8 && a >= 4)<<endl << endl;
    
    x = -2;
    y = 5;
    cout<< x << " multiplied by " << y << " is less than 10, or "<< y << " multiplied by z is less than 10: " <<(x*y < 10 || y*z < 10)<<endl << endl;
    
    
    int j = -2;
    int k = 5;
    int l = 4;
    cout<< j <<" multiplied by "<< l << " is never greator than 10, or " << y << " divided by " << x << " multiplied by 4 is greator than " << y << " multiplied by 2: " << (!(j*l < 10) || y/x * 4 < y *2);
    
    
}