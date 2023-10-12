#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "digite dois numeros: " << endl;
    cin >> x >> y;

    while (x != y) {
        if (x < y){
            cout << "CRESCENTE!" << endl;
        } else {
            cout << "DECRECENTE!" << endl;
        }

        cout << "digite outros dois numeros: " << endl;
        cin >> x >> y;

    }


    cout << "Fim do programa!" << endl;
    return 0;
}
