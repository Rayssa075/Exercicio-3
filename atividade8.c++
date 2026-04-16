#include <iostream>
using namespace std;
float media(float a, float b, float c, char t) {
    if (t == 'A')
        return (a + b + c) / 3;
    else
        return (a*5 + b*3 + c*2) / 10;
}
int main() {
    float n1, n2, n3;
    char t;
    cout << "Digite 3 notas: ";
    cin >> n1 >> n2 >> n3;
    cout << "Digite A (aritmetica) ou P (ponderada): ";
    cin >> t;
    cout << "Media = " << media(n1, n2, n3, t);
    return 0;
}
