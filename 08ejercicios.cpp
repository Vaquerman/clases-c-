#include <iostream>
using namespace std;
int main() {
    /*
    quiero un programa que te pregunte primero tu edad, despues te pregunte tu nombre, e imprimir: hola mi nombres jorge, y tengo 43 anios
    */
   int edad;
   string nombre;

    cout << "como te llamas?: ";
    cin >> nombre;
    cout << "cuantos anios tienes: ";
    cin >> edad;
    cout << "hola mi nombre es " << nombre << " y tengo " << edad << " anios" << endl;
    return 0;
}