#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float media,mfim,n1,n2,n3,n4,nexame;
    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2+n2*3+n3*4+n4*1)/10;
    cout << "Media: " << fixed << setprecision(1) << media<< endl;
    if(media>=7)
    cout << "Aluno aprovado." << endl;
    else if (media<5)
    cout << "Aluno reprovado." << endl;
    else{
        cout << "Aluno em exame." << endl;
        cin >> nexame;
        cout << "Nota do exame: " << fixed << setprecision(1) << nexame << endl;
        media = (media+nexame)/2;
        if(media>=5)
        cout << "Aluno aprovado." << endl;
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << media << endl;
        
        
    }
}