#include <iostream>

using namespace std;

int main()
{
    int x, y, troca, soma;

    cout << "digite dois numeros: " << endl;
    cin >> x;
    cin >> y;

    soma = 0;

    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    cout << "Hello world!" << endl;
    return 0;
}
