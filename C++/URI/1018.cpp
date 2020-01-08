#include <iostream>
using namespace std;
int main(){
    int valor, c100, c50, c20, c10, c5, c2, c1, resto;
    cin >> valor;
    c100 = valor/100;
    resto = valor%100;
    c50 = resto/50;
    resto= resto%50;
    c20= resto/20;
    resto%=20;
    c10 = resto/10;
    resto%=10;
    c5 = resto/5;
    resto%=5;
    c2 = resto/2;
    resto%=2;
    c1=resto/1;

    cout << valor << endl << c100 << " nota(s) de R$ 100,00\n" << c50 << " nota(s) de R$ 50,00\n" << c20 << " nota(s) de R$ 20,00\n" << c10 << " nota(s) de R$ 10,00\n" << c5 << " nota(s) de R$ 5,00\n" << c2 << " nota(s) de R$ 2,00\n" << c1 << " nota(s) de R$ 1,00\n";

    return 0;
}