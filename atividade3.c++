#include <iostream>
using namespace std;

// 1. Protótipo (A promessa)
float calcularpesoIdeal(float h, char s);

int main() {
    float h, pesoIdeal;
    char s;

    cout << "Digite sua altura em metros: ";
    cin >> h;
    cout << "Digite seu sexo (M/F): ";
    cin >> s;

    // 2. Chamada da função
    pesoIdeal = calcularpesoIdeal(h, s);
    
    cout << "Seu peso ideal e: " << pesoIdeal << "kg" << endl;

    return 0; 
} 


float calcularpesoIdeal(float h, char s) {
    if (s == 'M' || s == 'm') {
        return (72.7 * h) - 58;
    }
    else if (s == 'F' || s == 'f') {
        return (62.1 * h) - 44.7;
    }
    return 0; 
}
   

