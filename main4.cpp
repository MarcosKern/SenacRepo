#include <iostream>
using namespace std;

int main()
{
    int notaA, notaB, notaC;

    cout << "Digite a nota A: ";
    cin >> notaA;
    cout << "Digite a nota B: ";
    cin >> notaB;
    cout << "Digite a nota C: ";
    cin >> notaC;

    cout << "As notas digitadas foram: " << notaA << ", " << notaB << ", " << notaC << endl;

    // Exemplos de calculos em C++

    cout << "A nota A + a nota B é: " << notaA + notaB << endl;
    cout << "A nota A - a nota B é: " << notaA - notaB << endl;
    cout << "A nota A * a nota B é: " << notaA * notaB << endl;
    cout << "A nota A / a nota B é: " << notaA / notaB << endl;
    cout << "A nota A % a nota B é: " << notaA % notaB << endl;
    cout << "A média das notas é: " << (notaA + notaB + notaC) / 3.0 << endl;

    int notas = notaA + notaB + notaC;

    return 0;
}