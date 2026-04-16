#include <iostream>
using namespace std;
int maior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
int main() {
    int n1, n2;
    cout << "digite dois numeros: ";
    cin >> n1 >> n2;
    cout << "maior = " << maior(n1, n2);
    return 0;
}
