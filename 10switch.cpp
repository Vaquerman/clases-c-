/*
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

==============================================================================

#include <iostream>
using namespace std;
int main() {
    char color;
    cout << "seleccione un color: ";
    cout << " R = detenerse " ;
    cout << " A = precausion" ;
    cout << " v = avanzar" << endl;
    cin >> color ; 
    switch (color){
        case 'R':
            cout << "Detenerse" << endl;
            
            break;
        case 'A':
            cout << "Precausion" << endl;
            
            break;
        case 'v':
            cout << "Avanzar" << endl;
            
            break;  
        default:
            cout << "color no valido";
            break;         
    }
    return 0;   
}


*/

//Has un programa que te haga elegir que operacion quieres hacer  suma: a, resta: b, multiplicacion: c, division d. Y luego que te pida dos digitos para hacer esa operación, también si ingresas una opción que no existe, que te diga, la operación no existe
#include <iostream>
using namespace std;
int main(){
    char opcion;
    float digito1;
    float digito2;
    cout << "SELECCIONE UNA OPCION: " ;
    cout << " a = suma " ;
    cout << " b = resta " ;
    cout << " c = multiplicacion " ;
    cout << " d = division " << endl;
    cin >> opcion;
    switch (opcion){
        case 'a':
            cout << "ELEGISTE SUMA" << endl;
            cout << "Introduzca el primer digito" << endl;
            cin >> digito1;
            cout << "Introduzca el segundo digito" << endl;
            cin >> digito2;
            cout << "La suma de la operacion es: " << digito1 + digito2 << endl;
            break;
        case 'b':
            cout << "ELEGISTE RESTA" << endl;
            cout << "Introduzca el primer digito" << endl;
            cin >> digito1;
            cout << "Introduzca el segundo digito" << endl;
            cin >> digito2;
            cout << "La resta de la operacion es: " << digito1 - digito2 << endl;
            break;
        case 'c':
            cout << "ELEGISTE MULTIPLICACION" << endl;
            cout << "Introduzca el primer digito" << endl;
            cin >> digito1;
            cout << "Introduzca el segundo digito" << endl;
            cin >> digito2;
            cout << "La multiplicacion de la operacion es: " << digito1 * digito2 << endl;
            break;        
        case 'd':
            cout << "ELEGISTE DIVISION" << endl;
            cout << "Introduzca el primer digito" << endl;
            cin >> digito1;
            cout << "Introduzca el segundo digito" << endl;
            cin >> digito2;
            cout << "La division de la operacion es: " << (float) digito1 / digito2 << endl;
            break;
        default:
            cout << "OPERACION NO EXISTE";
            break;     
    }
    return 0;
}