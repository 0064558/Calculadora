#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Escolha o operador que deseja (+, -, *, /): ";
    cin >> op;

    cout << "Digite dois numeros: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Divisao por zero.";
            break;
        default:
            cout << "Operador invalido";
    }

    return 0;
}