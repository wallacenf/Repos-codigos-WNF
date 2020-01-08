#include <iostream>
using namespace std;
int main()
{
    int comp, p, usos;
    cin >> comp >> p >> usos;
    if (comp * usos <= p)
        cout << "S" << endl;
    else
        cout << "N\n";
}