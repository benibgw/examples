#include <iostream>
using namespace std;

int main() {

string opr;
double num1, num2, result;
//cria as variaveis

    cout << ("Escreva o que quer calcular : ");
    cin >> num1 >> opr >> num2;
    //define as variaveis

if (opr == "+") {result = num1 + num2;}
    else if (opr == "-") {result = num1 - num2;}
        else if (opr == "*") {result = num1 * num2;}
            else if (opr == "/") {result = num1 / num2;}
//opera os calculos

cout << ("O resultado da sua conta é ")<<result;
//exibe o resultado

return 0;
}
