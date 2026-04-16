#include <iostream>
using namespace std;

float calcularmediadeNotar(float teorica, float pratica, float exercicio);
void exibirResultado (float media);

int main () {
float teorica, pratica, exercicio, media;
 cout<<"Digite a nota da avaliação teorica:";
cin>>teorica;
 cout<<"Digite a nota da avaliação pratica:";
 cin>> pratica;
 cout<<"Digite a nota do exercicio:";
cin>> exercicio;

 media = calcularmediadeNotar(teorica, pratica, exercicio);

    exibirResultado(media);

 return 0;
}
 float calcularmediadeNotar(float teorica, float pratica, float exercicio){

 return ((teorica*7) + (pratica*2) + (exercicio*1)) / 10;

 }
void exibirResultado (float media){
 cout<<"Resultado:"<< endl;
 if (media>= 85 && media <= 100){
      cout<<"A" << endl;
  }
 else if (media >= 70 && media < 85){
 cout<<"B" << endl;
 }
 else if ( media >= 60 && media < 70){
      cout<<"C" << endl;
 }
 else if (media >= 50 && media < 60){
 cout <<"D" << endl;
 } else if ( media < 50 ){
      cout<<"E" << endl;
 }


}
