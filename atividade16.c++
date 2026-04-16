#include <iostream>
using namespace std;
    int bissexto (int ano){
    if (ano%400==0){
    return 1;
    }
    if (ano%100==0){
    return 0;
    }
    if (ano%4==0){
    return 1;
    }
    return 0;
    }
    int main () {
    int ano, resultado;
    cout<< "Insira o ano escolhido: ";
    cin>> ano;
    resultado=bissexto(ano);
    if(resultado==1){
        cout<<"O ano indicado é bissexto";
        return 0;
    }
    if(resultado==0){
        cout<<"O ano indicado não é bissexto";
        return 0;
    }
    return 0;
}
