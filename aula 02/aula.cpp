#include <iostream>
#include <string>
using namespace std;

int main() {
    int idade;
    float altura;
    char genero;
    bool programador;
    string nome;
    
    cout << "informe a sua idade:";
    cin >> idade;

    cout << "informe sua altura:";
    cin >> altura;
    
    cout << "informe seu genero:";
    cin >> genero;

    cout << "é programador?";
    cin >> programador;

    cin.ignore();

    cout << "nome?";
    //cin >> nome;
    //cin >> nome;
    getline (cin, nome);

    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
    cout << "genero: " << genero << endl;
    cout << boolalpha;
    cout << "programador: " << programador << endl;
    cout << "nome: " << nome << endl;

}