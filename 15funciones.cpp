#include <iostream>
using namespace std;
void saludar(){
    cout << " Hola Mundo ";
}
void imprimirMensaje();// esto es un ejemplo de mala practica por que se esta repitiendo con el codigo de la linea 19.
int main(){
    saludar();
    imprimirMensaje();
    saludar();
    return 0;
}
void imprimirMensaje(){
    cout << "Hello world";
}
