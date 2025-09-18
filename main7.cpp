#include <iostream>
using namespace std;

int main()
{
    int count = 20;
    bool run = true;

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

    while (run)
    {
        int option;
        cout << "===================================================" << endl;
        cout << "1) Mudar nome." << endl;
        cout << "2) Mudar idade." << endl;
        cout << "3) Mudar altura." << endl;
        cout << "0) Encerrar programa." << endl;
        cout << "===================================================" << endl;
        cout << endl;
        cout << "Digite o numero da opção correspondente." << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Digite o novo nome: ";
            cin >> nome;
            break;
        case 2:
            cout << "Digite a nova idade: ";
            cin >> idade;
            break;
        case 3:
            cout << "Digite a nova altura: ";
            cin >> altura;
            break;
        case 0:
            run = false;
            break;
        default:
            cout << "Opção selecionada incorreta, retornando ao inicio.";
            break;
        }
    }

    cout << "Olá " << nome
         << "! Você tem " << idade
         << " anos e tem " << altura
         << " de altura!" << endl;

    return 0;
}