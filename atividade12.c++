#include <iostream>
#include <cmath>
using namespace std;

int menu (){
 int opçao;
 cout << "---Menu de Opção---"<<endl;
 cout << "1 - Calcular o seno de um angulo" << endl;
 cout<<"2-  Calcular o cosseno de um angulo" << endl;
 cout<<"3 - Calcular a potencia de um numero por outro" << endl;
 cout<<" 4 - Calcular a raiz quadrada de um numero"<< endl;
 cout<<"Digite um numero:";
 cin>> opçao;
 return opçao;

 
}

int main () {
    int escolha;
    double valor1, valor2;
    escolha = menu ();

    switch (escolha)
    {
    case 1:
       cout << "Digite o valor em radianos: ";
       cin >> valor1;
       cout <<" Seno:" << sin(valor1) << endl;
        break;
    case 2:
        cout << "Digite o valor em radianos: ";
        cin >> valor1;
        cout << "Cosseno:" << cos(valor1)<< endl;
        break;
    case 3:
        cout << "Digite o valor da base e expoente: ";
        cin >> valor1 >> valor2;
        cout << "Potencia:"<< pow(valor1, valor2) << endl;
        break;
    case 4:
        cout << "Digite um valor: ";
        cin >> valor1;
        cout << "Raiz quadrada:" << sqrt(valor1) << endl;
        break;
    default:
        cout << "Opção inválida!" << endl;
        break;
    }
    return 0;
}
