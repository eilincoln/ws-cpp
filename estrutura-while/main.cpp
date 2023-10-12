#include <iostream>

using namespace std;

int main()
{
    int x, soma;

    soma = 0;

    cout << "Digite o primeiro numero: ";
    cin >> x;

    while (x != 0) {
        soma = soma + x;
        cout << "digite outro numero: ";
        cin >> x;
    }

    cout << "SOMA = " << soma << endl;

    cout << "Hello world!" << endl;
    return 0;
}
