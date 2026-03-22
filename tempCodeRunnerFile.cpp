#include <iostream>
using namespace std;
int main(){
float a;
float b;
char i;
    cout << "Bem vindo a calculadora, digite os dois numeros desejados para realizar a operacao\n";
    cin >> a;
    cin >> b;

    if(cin.fail()){
        cout << "digite um valor valido";
        return 0;}

    cout << "digite a operacao\n + \n - \n * \n / \n";
    cin >> i;
switch(i){

    case '+':
    cout << "o resultado e: " << a + b;break;

    case '-':
    cout << "o resultado e: " << a - b;break;

    case '*':
    cout << "o resultado e: " << a * b;break;

    case '/':
    cout << "o resultado e: " << a / b;break;

    default:
    cout << "digite um valor valido";break;
    break;}
    return 0;
}