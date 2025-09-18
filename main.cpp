#include <iostream>
using namespace std;

// Comando do terminal para compilar o codigo para um arquivo de execução:
// g++ nomeDoArquivo.cpp -o arquivo
// Comando para executar o arquivo:
// ./arquivo

int main()
{
    string nome;
    int idade;
    float altura;

    cout << "Digite seu nome: "; // saida de dados cOUT
    cin >> nome;                 // leitura de dados do teclado cIN
    cout << "Digite sua idade: ";
    cin >> idade;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << "Olá " << nome
         << "! Você tem " << idade
         << " anos e tem " << altura
         << " de altura!" << endl;

    return 0;
}