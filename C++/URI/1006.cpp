#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c,media;
    cin >> a >> b >> c;
    media = (2*a + 3*b + 5*c)/10;
    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;
    return 0;
}