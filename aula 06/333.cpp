#include <iostream>

using namespace std;

int main() {

int qtdNotas; acimaMedia
float notas[100];
float media = 0;

    cout << "informe a media: ";
    cin >> media;

    cout << "informe a quantidade de notas (max 100): ";
    cin >> qtdNotas;

    if (qtdNotas > 100) {
        cout << "Número de notas invalido!"
    }

    else {
        for (int i = 0; i <qtdNotas; i++) {
            cout << "informe a média: ";
            cin >> notas[i];
        }
    }

    for (int i = 0; i < qtdNotas; i++) {
        float nota;
        cout << "informe a nota"
        cin >> notas[i];


        if (nota >= media) {
            acimaMedia++;
        }

    }

cout << "informe a media: ";
cin >> media;




    return 0;
}