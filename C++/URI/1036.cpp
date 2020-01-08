#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double a,b,c,delta,r1,r2;
    cin >> a >> b >> c;
    delta = b*b-4*a*c;

    if (a==0 || delta<0)
    cout << "Impossivel calcular" << endl;
    else
    {
        delta=pow(delta,0.5);
        r1 = (-b+delta)/(2*a);
        r2 = (-b-delta)/(2*a);
        cout << fixed;
        cout.precision(5);
        cout << "R1 = " << r1 << endl << "R2 = " << r2 << endl;
    }
    
    
}