#include <iostream>
using namespace std;

const float MiNIMO=1621.00;
int acimadaMedia(float s1, float s2, float s3, float s4, float s5);

int main () {
    int cont = 0;
    float s1;
    cout<<"Digite o valor do salario do primeiro membro da familia:";
    cin>> s1;

    float s2;
    cout<< "Difite o salario do segundo membro da familia:";
    cin>> s2;

    float s3;
    cout<< "Digite o salario do terceiro membro da familia:";
    cin>> s3;

    float s4;
    cout<<"Digite o salario do quarto membro da familia:";
    cin>> s4;

    float s5;
    cout<< "Digite o salario do quinto membro da familia:";
    cin>> s5;

    acimadaMedia( s1, s2, s3, s4, s5);
    return 0;
}

 int acimadaMedia(float s1, float s2, float s3, float s4, float s5) {
        int cont = 0;
    if ( s1 > MiNIMO) {
        cont++;
    }
    if ( s2 > MiNIMO) {
        cont++;
    }
    if ( s3 > MiNIMO) {
        cont++;
    }
    if ( s4 > MiNIMO) {
        cont++;
    }
    if ( s5>MiNIMO) {
        cont++;
    }
    cout<< " A quantidade de membros da familia que recebem mais do que um salario minimo é: " << cont << endl;
    return cont;
}
