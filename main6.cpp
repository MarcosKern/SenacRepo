#include <iostream>
using namespace std;

int main() {
    string nome;
    float peso, altura;

    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite seu peso (em kg)/: ";
    cin >> peso;
    cout << "Digite sua altura (em metros): ";
    cin >> altura;

    float imc = peso / (altura * altura);

    cout << "----------------------------------------" << endl;
    cout << "           Calculadora de IMC           " << endl;
    cout << "Nome: " << nome << endl;
    cout << "Peso: " << peso << endl;
    cout << "Altura: " << altura << endl;
    cout << endl;
    cout << "Seu IMC é de " << imc << endl;
    if(imc < 18.5 ) {
        cout << "Abaixo do peso." << endl;
    } else if(imc >= 18.5 && imc < 25) {
        cout << "Faixa ideal de peso." << endl;
    } else if(imc >= 25 && imc < 30) {
        cout << "Sobrepeso." << endl;
    } else if(imc >= 30 && imc < 40) {
        cout << "Obeso." << endl;
    } else {
        cout << "Obesidade extrema." << endl;
    }

    cout << "----------------------------------------" << endl;
    return 0;
}