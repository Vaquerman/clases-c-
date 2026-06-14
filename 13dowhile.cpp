/*
#include <iostream>
using namespace std;
int main(){
    int i = 1;
    do
    {
        if (i == 6)break;
        cout << i << endl;
        i++;//primero va el codigo y luego la condicion
    } while (i <= 10 );
}
*/


/*
saca el promedio general de la materia del alumno
la practica vale 30%
la teoria 60%
participacion 10%
ninguna calificaicon debe de ser mayor a 10
*/
#include<iostream>
using namespace std;
int main(){

    float practica, teoria, participacion, notaFinal = 0;

    cout<<"Ingresa la calificacion de la practica: ";
    cin>>practica; 

    while(practica > 10){
        cout<<"Error, la calificacion no puede ser mayor a 10"<<endl;
        cout<<"Ingrese nueva mente la calificacion de la practica"<<endl;
        cin>>practica;
    }


}