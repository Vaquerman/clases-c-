/* 
#include <iostream>
using namespace std;
int main() {
    
    // quiero un programa que te pregunte primero tu edad, despues te pregunte tu nombre, e imprimir: hola mi nombres jorge, y tengo 43 anios
    
   int edad;
   string nombre;

    cout << "como te llamas?: ";
    cin >> nombre;
    cout << "cuantos anios tienes: ";
    cin >> edad;
    cout << "hola mi nombre es " << nombre << " y tengo " << edad << " anios" << endl;
    return 0;

    
}




=================================================================

#include <iostream>
using namespace std;
int edad = 40;
int main() {
    cout << edad << endl;
    return 0;
}


==================================================================
// quiero un programa que multiplique 2 numeros
#include <iostream>
using namespace std;
int primernumero;
int segundonumero;

int main() {
    cout << "introduce primer numero: ";
    cin >> primernumero; 
    cout << "introduce segundo numero:";
    cin >> segundonumero;
    cout << "el restultado de la multiplicacion del primero numero y segundo numero es: " << primernumero * segundonumero << endl ;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int numero1 = 5;
    int numero2 = 7;
    cout << numero1 * numero2 << endl;
    return 0;
}

//quiero un programa que imprima eres mayor de edad o eres menor de edad verificando la edad en una variable
#include <iostream>
using namespace std;
int main(){
    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;
    if (edad >= 18)
        cout << "es mayor de edad" << endl;
    else
        cout << "menor de edad";    
}

*/

/*
Tarea: ¿El número es positivo o negativo? 🔢
Instrucciones
Escribe un programa que:

Pida al usuario ingresar un número
Si es mayor a 0 → imprimir "El numero es positivo"
Si es menor a 0 → imprimir "El numero es negativo"
Si es exactamente 0 → imprimir "El numero es cero"

#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Introduce numero: ";
    cin >> numero;
    if (numero > 0)
        cout << "el numero es poisitivo" << endl;
    else if (numero < 0)
        cout << "el numero es negativo" << endl;
    else 
        cout << "numero es igual a 0" << endl;
        return 0;
}
==============================================================
// quiero un programa que me pida 2 digitos o numeros, y despues los sume, multiplique, reste, y divida
#include <iostream>
using namespace std;
int main() {
    int numero1;
    int numero2;
    cout << "Introduce numero 1" ; 
    cin >> numero1;
    cout << "Introduce numero 2" ;
    cin >> numero2;
    cout << numero1 + numero2 << endl;
    cout << numero1 * numero2 << endl;
    cout << numero1 / numero2 << endl;
    cout << numero1 - numero2 << endl;
    return 0;
}
===============================================================   
#include <iostream>
using namespace std;
int main() {
    int num1, num2 ;
    cout << "Ingresa el primer numero " ; cin >> num1 ;
    cout << "Ingrese el segundo numero " ; cin >> num2 ;
    
    int suma = num1 + num2 ;
    int resta = num1 - num2 ;
    int multiplicacion = num1 * num2 ;
    float division = (float)num1 / num2 ;
    cout << "la suma de los 2 numeros es: " <<  suma ; 
    cout << "la resta de los 2 numeros es: " << resta ;
    cout << "la multipliacion de los 2 numeros es: " <<  multiplicacion ;
    cout << "la division de los 2 numeros es: " <<  division ;
    return 0;

}
===============================================================



//1-Crea un programa que te imprima una respuesta sobre si eres mayor de edad o no, pero también debe de preguntar si la persona trae ID Pista: Para preguntar si tiene ID, usa un dato diferente de enteros y texto
#include <iostream>
#include <string>
using namespace std;
int main() {
    int edad;
    bool tieneID;
    cout << "ingrese edad: " ; 
    cin >> edad;
    if (edad >= 18) {
        cout << "tiene identficacion? (1=si, 0=no)" << endl;
        cin >> tieneID;
        if (tieneID == true){
            cout << "Bienvenido, puede pasar" << endl;
        } else {
            cout << "Disculpe, sin identificacion no puede pasar" << endl ;
        }
    } else {
        cout << "Lo sentimos, usted es menor de edad, por lo tanto no puede pasar";
    }

}



==========================================================================
#include <iostream>
using namespace std;
int main () {
    char operacion;
    float numero1;
    float numero2;
    cout << "Ingrese operacion: ";
    cin >> operacion ; 
    cout << "Ingrese primer numero";
    cin >> numero1;
    cout << "Ingrese segundo numero";
    cin >> numero2;
    if (operacion == '+') {
        cout << "suma" << endl;
        cout << (float)numero1 + numero2 ;
    }else if (operacion == '-'){
        cout << "resta" << endl;
        cout << (float)numero1 - numero2;
    }else if (operacion == '*'){
        cout << "multiplicacion" << endl;
        cout << (float)numero1 * numero2;
    }else if (operacion == '/') { 
        cout << " division" << endl;
        cout << (float)numero1 / numero2;
    }else{
        cout << "operacion no valida";
        
    }
        
    return 0;

}
=========================================================

#include <iostream>
using namespace std;
int main(){
    float precio;
    float gasto;
    bool tieneDescuento;
    cout << "Ingrese precio del producto: " ;
    cin >> precio ;
    cout << "tiene tarjeta de descuento?: " ;
    cin >> tieneDescuento;
    if (tieneDescuento == true){
        cout << "cuanto ha gastado este mes? : " ;
        cin >> gasto;
         if (gasto >= 500){
            precio = precio - (precio*0.20);
            cout << "Descuento 20% " << endl;
            cout << "precio final: " << precio << endl;
        }else if (gasto >= 200 && gasto < 500) {
        precio = precio - (precio*0.10);
        cout << "Descuento 10% " << endl ;
        cout << "precio final: " << precio << endl;
        }else if (gasto < 200){
        precio = precio - (precio*0.05);
        cout << "Descuento 5% " << endl ;
        cout << "precio final: " << precio << endl;
        }    
    }else{
        cout << "sin descuento: " << endl;
        cout << "precio final" << precio;
    }
    return 0;
}
====================================================

#include <iostream>
using namespace std;
int main() {
    int hora;
    int minutos;
    cout << "Ingrese hora: " ;
    cin >> hora;
    if (hora >= 5 && hora <=11){
        cout << "BUENOS DIAS" << endl;
    }else if (hora >=12 && hora <= 18 ){
        cout << "BUENAS TARDES" << endl;
    }else if (hora >= 19 && hora <= 23 || hora >= 0 && hora <=4) {
        cout << "BUENAS NOCHES" << endl;
    }else {
        cout << "HORA NO VALIDA" << endl;
    }
    return 0; 
}
*/

//Has un programa que te haga elegir que operacion quieres hacer  suma: a, resta: b, multiplicacion: c, division d. Y luego que te pida dos digitos para hacer esa operación, también si ingresas una opción que no existe, que te diga, la operación no existe









