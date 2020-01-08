#include <iostream>
using namespace std;
int main(){
    int item, qtd;
    double preco;
    cin >> item >> qtd;
    if (item==1)
    preco = 4.00;
    if (item==2)
    preco = 4.5;
    if (item==3)
    preco = 5;
        if (item==4)
    preco = 2;
        if (item==5)
    preco = 1.5;
    cout << fixed;
    cout.precision(2);
    cout << "Total: R$ " << preco*qtd << endl;
}