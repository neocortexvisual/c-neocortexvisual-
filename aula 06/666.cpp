#include <iostream>

using namespace std;

void imprimirArray(int numeros)

void bubbleStart (int numeros [] , int tamanho) {
    for (int i = 0; i < tamahno - 1; i++) {
        for (int j = 0; j < tamanho - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }


}

int main() {

    int numero[7] = {8, 2, 4, 7, 3, 1, 9};



    return 0;
}
