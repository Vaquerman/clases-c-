/*HACER UN PROGRAMA QUE PIDA 2 VALORES Y LOS INTERCAMBIE. DEBE IMPRIMIR, EL NUEVO VALOR DE X ES Y.
EL VALOR DE X ES 5 
EL VALOR DE Y ES 7
EL NUEVO VALOR DE X ES 7
EL NUEVO VALOR DE Y ES 5
#include <iostream>
using namespace std;
int main() {
int x ;
int y ;
cout << "Ingrese primer valor" << endl ; cin >> x ; 
cout << "Ingresa segundo valor" << endl ; cin >> y;
cout << "el valor x es: " <<  y  << endl;  

}

#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    cout << "Dame el valor de x: "; cin >> x;
    cout << "Dame el valor de y: "; cin >> y;

    z = x;
    x = y;
    y = z;
    cout << "El nuevo valor de x es: " << x << endl;
    cout << "El nuevo valor de y es: " << y << endl;
}
*/
//Crea un programa donde de 2 numeros y que imprima todos los numeros pares que hay entre esos 2 numeros. 
#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int contador = 0;
    cout << "Ingrese primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese segundo numero: " << endl;
    cin >> num2;

    if (num1 < num2) {
        for ( int i = num1; i <= num2; i++){
            if(i % 2 == 0){
                cout << i << endl;
                contador ++;
            }
        }

        cout << "Se imprimieron: " << contador << " numeros pares " << endl;

    }else if(num1 > num2) {
        for (int i = num1; i >= num2; i--){
            if(i % 2 == 0){
                cout << i << endl;
                contador ++;
            }
        }

        cout << " Se imprimieron: " << contador << " numeros pares: " << endl;

    }else {
        cout << " Los Datos que ingresaste no son validos!! ";
    }
    
}