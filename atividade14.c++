#include <iostream> 
using namespace std;
    int quadrante(int a){
        if(a==0 || a==90 || a==180 || a==360){
            return 0;
        }
        if(a>0 && a<90){
            return 1;
        }
        if(a>90 && a<180){
            return 2;
        }
        if(a>180 && a<270){
            return 3;
        }
        if(a>270 && a<360){
            return 4;
        }
    }
    int main () {
        int a, x;
        cout<<"Insira o angulo desejado: ";
        cin>> a;
        x=quadrante(a);
        if(x==0){
            cout<< "0";
        }
        if(x==1){
            cout<<"1";
        }
        if(x==2){
            cout<<"2";
        }
        if(x==3){
            cout<<"3";
        }
        if(x==4){
            cout<<"4";
        }
       
    return 0;
}
