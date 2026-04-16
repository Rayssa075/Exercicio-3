#include <iostream>
using namespace std;
int vn (int num) {
    int p1 = num / 100;  
    int p2 = num % 100;   

    int soma = p1 + p2;
    int quadrado = soma * soma;

    if (quadrado == num) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int numero;
    cout << "Digite um numero de 4 digitos: ";
    cin >> numero;
    if (vn(numero) == 1) {
        cout << "O numero possui caracteristica." << endl;
    } else {
        cout << "O numero nao possui caracteristica." << endl;
    }
    return 0;
}
