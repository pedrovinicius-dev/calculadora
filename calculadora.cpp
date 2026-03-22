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
        cout << "valor invalido";
        return 0;}

    cout << "digite a operacao\n + \n - \n * \n / \n";
    cin >> i;
switch(i){

    case '+':
    cout << "o resultado: " << a + b;break;

    case '-':
    cout << "o resultado: " << a - b;break;

    case '*':
    cout << "o resultado: " << a * b;break;

    case '/':
    if(b == 0){
        cout << "erro:divisao por zero";}
    else{
    cout << "resultado: " << a / b;}break;

    default:
    cout << "operacao invalida";break;}
    return 0;
}