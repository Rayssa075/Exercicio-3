#include <iostream>
using namespace std;
void separar(float num, int &inteira, float &decimal) {
    inteira = (int) num;
    decimal = num - inteira;
}
int main() {
    float numero, dec;
    int inteiro;
    cout << "Digite um numero: ";
    cin >> numero;
    separar(numero, inteiro, dec);
    cout << "Parte inteira: " << inteiro << endl;
    cout << "Parte decimal: " << dec << endl;
    return 0;
}
