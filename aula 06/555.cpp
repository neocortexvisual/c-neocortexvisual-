#include <iostream>

using namespace std;

int buscalinear(int numeros[], int numero, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (numero[i] == numero) {
            return i;
        }
    }
    return -1;
}

int main() {

    int numeros[7] = {0, 2, 4, 7, 3, 1, 9};

    int indice = buscalinear(numeros, 1, 7);

    if (indice == -1) {
        cout << "O número não foi encontrado! \n"; 
    }
    else {
        cout << "O número está na posição " << indice << endl;
    }
    return 0;
}