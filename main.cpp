#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1, num2;

    cout << "Que tipo de conta você quer fazer? + | - | * | / ";
    cin >> op;

    cout << "Me fale dois números: ";
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;

    default:
        cout << "Algo deu errado!";
        break;
    }

    return 0;
}