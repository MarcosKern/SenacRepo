#include <iostream>
using namespace std;

int main() {
    string nome;
    int idade;
    float altura;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << "Olá " << nome
    << "! Você tem " << idade
    << " anos e tem " << altura
    << " de altura!" << endl;

    if(idade < 18) { // Estrutura condicional
        cout << "Você é menor de idade." << endl;
    } else if(idade >= 18 && idade < 21) {
        cout << "Você é menor de idade." << endl;
    } else if(idade >= 21 && idade < 65) {
        cout << "Você Já pode beber." << endl;
    } else if(idade >= 65 && idade < 100) {
        cout << "Você é idoso." << endl;
    } else if(idade >= 100 && idade < 120) {
        cout << "Você é centenario" << endl;
    } else {
        cout << "Você esta vivo." << endl;
    }

    return 0;
}