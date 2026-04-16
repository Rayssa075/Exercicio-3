#include <iostream>
using namespace std;
  void ordem ( int a, int b, int c, int &menor, int &maior, int &meio) {
        if(a>=b && a>=c){
            maior = a;
        }
        else if(b>=a && b>=c){
            maior = b;
        }
        else if(c>=a && c>=b){
            maior = c;
        }
        if(a<=b && a<=c){
            menor = a;
        }
        else if(b<=a && b<=c){
            menor = b;
        }
        else if(c<=a && c<=b){
            menor =c;
        }
        meio= a+b+c-maior-menor;
    }
    int main(){
        int a, b, c;
        int menor, meio, maior;
        char x;
        cout<<"Insira três valores: ";
        cin>>a>>b>>c;
        cout<< "Escolha 'c' se quiser em ordem crescente e 'd' se quiser em ordem decrescente ";
        cin>>x;
        ordem (a, b, c, menor, maior, meio);
        if(x=='c'){
            cout<<menor<<" , "<<meio<< " , " <<maior;
        }
        if(x=='d'){
            cout<<maior<< " , " <<meio<< " , " <<menor;
        }
        return 0;
    }
