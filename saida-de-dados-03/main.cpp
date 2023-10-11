#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    int idade;
    double salario;
    string nome;
    char sexo;

    idade = 32;
    salario = 4365.3;
    nome = "lincoln berto";
    sexo = 'M';

    cout << fixed << setprecision(2);
    cout << "a func " << nome << ", do sexo " << sexo <<
        ", ganha " << salario << " e tem " << idade << " anos." << endl;


    cout << "Hello world!" << endl;
    return 0;
}
