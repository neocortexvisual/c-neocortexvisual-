#include <iostream>

using namespace std;


int main() {

    int numero;
    cout << "Informe um numero";
    cin >> numero;

   for (int multi = 1; multi <= 10; multi++) {
        cout << numero * multi << endl;
   }


   return 0;
}
