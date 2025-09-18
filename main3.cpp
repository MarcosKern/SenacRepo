#include <iostream>
using namespace std;

int main()
{
    bool condicao = true;
    bool condicao2 = false;

    if (condicao && condicao2)
    { // Operador E
        cout << "As duas condições são verdadeiras." << endl;
    }
    if (condicao || condicao2)
    { // Operador OU
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }
    if (!condicao2)
    { // Operador de negação (verdadeiro vira falso e falso vira verdadeiro)
        cout << "A segunda condição é falsa" << endl;
    }

    return 0;
}