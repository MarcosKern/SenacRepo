#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5}; // Definição de um array: tipo nome[tamanho]

    for (int i = 0; i < 5; i++)
    {
        cout << "O numero atual é " << numbers[i] << endl;
    }
}