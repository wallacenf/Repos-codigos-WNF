#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double raio,pi=3.14159,area;
    cin >> raio;
    area = raio*raio*pi;
    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}