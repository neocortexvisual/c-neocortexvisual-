#include <iostream>

using namespace std;

int main() {

    int numeros[5] = {10, 20, 30, 40, 50};

    cout << numeros[0] << endl;
    cout << numeros[1] << endl;
    cout << numeros[2] << endl;
    cout << numeros[3] << endl;
    cout << numeros[4] << endl;

    for (int index = 0; index < 5; index++) {
        cout <<"[" << index << "]: " << numeros [index] << endl;
    }

int soma; = 0;

for (int i =0; i < 5; i++) {
    soma = soma + numeros[i];
}

cout << "A soma é " << soma << endl;

for (int numero : numeros) {
    cout << numero << endl;
}















}