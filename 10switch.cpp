#include <iostream>
using namespace std;
int main() {
    // los tipos de datos que acepta switch son: int, char, enum. el tipo de dato char puede solo escribir 1 letra
    int opcion = 2;
    switch (opcion){
    
    case  1:
        cout << "seleccionaste la tecla con el numero 1";
        break;
    case  2:
        cout << "seleccionaste la tecla con el numero 2";
        break;
    default:
        cout << "seleccionaste otra tecla";
        break;
    }
    return 0;
}