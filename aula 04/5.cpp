#include <iostream>

using namespace std;

int main() {
int contador = 0;



while (true) {
    int idade;
    cout << "informe a idade: ";
    cin >> idade;

    if (idade < 0) {
        break;

    }
    if (idade >= 18) {
        cout << "você é maior de idade.\n\n"; 
    }

    else {
        cout << "você é menor de idade. \n\n";
    }

    return 0;

}
}
