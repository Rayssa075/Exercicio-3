#include <iostream>
using namespace std;


float calcularIMC(float peso, float altura);
bool validaEntrada(float peso, float altura);
void exibeClassificacaoImc(float imc);
void exibeTabelaIMC();

int main() {
    float peso, altura, imc;

   
    exibeTabelaIMC();

    cout << "\nDigite seu peso em quilos: ";
    cin >> peso;
    cout << "Digite sua altura em metros: ";
    cin >> altura;

    
    if (validaEntrada(peso, altura)) {
       
        imc = calcularIMC(peso, altura);
        
        cout << "\nSeu IMC e: " << imc << endl;
      
        exibeClassificacaoImc(imc);
    } 
    else {
        cout << "\nErro: Peso ou altura invalidos!";
    }

    return 0; 
}

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

bool validaEntrada(float peso, float altura) {
    if (peso <= 0 || altura <= 0) {
        return false;
    }
    return true;
}

void exibeClassificacaoImc(float imc) {
    if (imc < 18.5) {
        cout << "Classificacao: Abaixo do peso" << endl;
    }
    else if (imc >= 18.5 && imc < 25) {
        cout << "Classificacao: Peso normal" << endl;
    }
    else if (imc >= 25 && imc < 30) {
        cout << "Classificacao: Sobrepeso" << endl;
    }
    else if (imc >= 30 && imc < 35) {
        cout << "Classificacao: Obesidade 1" << endl;
    }
    else if (imc >= 35 && imc < 40) {
        cout << "Classificacao: Obesidade 2 severa" << endl;
    }
    else {
        cout << "Classificacao: Obesidade 3 ou morbida" << endl;
    }
}

void exibeTabelaIMC() {
    cout << "\n------ Tabela IMC ------" << endl;
    cout << "IMC \t\t Classificacao" << endl;
    cout << "< 18.5 \t\t Abaixo do peso" << endl;
    cout << "18.5 - 24.9 \t Peso normal" << endl;
    cout << "25.0 - 29.9 \t Sobrepeso" << endl;  
    cout << "30.0 - 34.9 \t Obesidade 1" << endl;
    cout << "35.0 - 39.9 \t Obesidade 2 severa" << endl;
    cout << "> 40.0 \t\t Obesidade 3 ou morbida" << endl;
}
