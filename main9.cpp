#include <iostream>
using namespace std;

int main()
{
    float numA, numB;
    char operacao;
    int execucoes = 0;

    while (execucoes == 0)
    {
        cout << "Digite o primeiro número: ";
        cin >> numA;
        cout << "Digite o segundo número: ";
        cin >> numB;
        cout << "Digite uma operação (+, -, *, /): ";
        cin >> operacao;

        switch (operacao)
        {
        case '+':
            cout << "O resultado da operação é " << numA + numB << ".";
            break;
        case '-':
            cout << "O resultado da operação é " << numA - numB << ".";
            break;
        case '*':
            cout << "O resultado da operação é " << numA * numB << ".";
            break;
        case '/':
            if (numB != 0)
            {
                cout << "O resultado da operação é " << numA / numB << ".";
            }
            else
            {
                cout << "Erro: Divisão por zero!";
            }
            break;
        default:
            cout << "Operador invalido.";
            break;
        }

        cout << "Deseja realizar outra operação? (0 - Sim, 1 - Não)" << endl;
        cin >> execucoes;
    }

    return 0;
}