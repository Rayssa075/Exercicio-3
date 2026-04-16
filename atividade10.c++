#include <iostream>
using namespace std;
void ord(char &a, char &b, char &c) {
    char temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
}
int main() {
    char c1, c2, c3;
    cout << "digite 3 caracteres: ";
    cin >> c1 >> c2 >> c3;
    ord(c1, c2, c3);
    cout << c1 << " " << c2 << " " << c3;
    return 0;
}
