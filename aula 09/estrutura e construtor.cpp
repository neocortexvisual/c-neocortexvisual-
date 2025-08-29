#include <iostream>

using namespace std;

    //struct é tipo um container que ajuda a otimizar funções do código que agrupa dados relacionados
struct Aluno{
    string nome;
    int idade;
    float nota;

    Aluno (string n, int i, float nt) {
        nome = n;
        idade = i;
        nota = nt;
    }
};


int main () {

    Aluno aluno = {"Anthony", 22, 10};

    // Acesso
    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Nota: " << aluno.nota << endl;

    // Modificação
    aluno.nome = "Luiz";
    aluno.idade = 24;
    aluno.nota = 9;

    cout << "Informe seu nome: ";
    cin >> aluno.nome;

    cout << "Informe a sua idade: ";
    cin >> aluno.idade;

    cout << "Informe a sua nota: ";
    cin >> aluno.nota;

    return 0;
}