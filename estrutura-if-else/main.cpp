#include <iostream>

using namespace std;

int main()
{
    int hora;

    cout << "Digite uma hora do dia: ";
    cin >> hora;

    if (hora < 12) {
        cout << "bom dia!" << endl;
    } else {
        cout << "boa tarde" << endl;
    }

    cout << "Hello world!" << endl;
    return 0;
}
