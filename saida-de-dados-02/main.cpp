#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // para imprimir valores com ponto flutuante

    double x;

    x = 2.4231;

    cout << fixed << setprecision(2) << x << endl;

    cout << "Hello world!" << endl;
    return 0;
}
