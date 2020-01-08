#include <iostream>
using namespace std;
int main(){
    int h,m,s,entrada;
    cin >> entrada;
    h = entrada/3600;
    entrada%=3600;
    m=entrada/60;
    entrada%=60;
    s = entrada;

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}