#include <iostream>
using namespace std;

bool valoresdeIntervalo( int inicio, int fim, int valor);


int main () {
    int inicio, fim, valor;
    cout<<"Digite o valor de inicio do intervalo:";
    cin>> inicio;
    cout<<"Digite o valor do fim do intervalo:";
    cin>> fim;
    cout<<"Digite um valor:";
    cin>> valor;

    if (valoresdeIntervalo(inicio, fim, valor)) {
    cout<< "O valor esta dentro do intervalo." << endl;
    } else {
        cout<<"O valor nao esta dentro do intervalo." << endl;
    
    }
return 0;
}

bool valoresdeIntervalo( int inicio, int fim, int valor) {
 return (valor>= inicio && valor<= fim);

}
