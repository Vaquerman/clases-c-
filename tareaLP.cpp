/*
Enunciado del Ejercicio
Una institución educativa desea realizar un estudio sobre el estado académico y físico de un grupo de estudiantes.
Desarrolle un programa en C++ que permita ingresar la cantidad de estudiantes (N). Para cada estudiante se deberá registrar:
Su peso en kilogramos.
Su nota final (de 0 a 20).
El programa debe validar que:
La cantidad de estudiantes sea mayor que cero.
El peso sea un valor positivo.
La nota esté comprendida entre 0 y 20.
Al finalizar el ingreso de datos, el programa deberá determinar y mostrar cuántos estudiantes cumplen simultáneamente las siguientes condiciones:
Pesan menos de 60 kg.
Obtuvieron una nota desaprobatoria (menor a 12).
*/

#include<iostream>
using namespace std;
//declaracion de variables
int peso;
float nota;
string nombre;
char otroAlumno;
int main(){
    cout<<"Ingresa tu nombre: "<<endl;
    cin>>nombre;
    cout<<"Ingresa tu peso: "<<endl;
    cin>>peso;
    //validamos peso
    while(peso<0){
        cout<<"ERROR, PESO INCORRECTO"<<endl;
        cout<<"INGRESE NUEVAMENTE EL PESO "<<endl;
        cin>>peso;
    }
    cout<<"ingresa tu nota: "<<endl;
    cin>>nota;
    //validamos nota
    while(nota<0 || nota>20){
        cout<<"EROOR, TU CALIFICACION NO DEBE SER MENOR A 0 Y NO DEBE SER MAYOR A 20 "<<endl;
        cout<<"INGRESA LA CALIFICACION NUEVAMENTE "<<endl;
        cin>>nota;
    }
    cout<<"deseas ingresar los datos de otro alumno?: S/N"<<endl;
    cin>>otroAlumno;

    if(otroAlumno=='s'){
            cout<<"Ingresa tu nombre: "<<endl;
            cin>>nombre;
     cout<<"Ingresa tu peso: "<<endl;
            cin>>peso;
            //validamos peso
        while(peso<0){
            cout<<"ERROR, PESO INCORRECTO"<<endl;
            cout<<"INGRESE NUEVAMENTE EL PESO "<<endl;
            cin>>peso;
        }
        cout<<"ingresa tu nota: "<<endl;
        cin>>nota;

        //validamos nota
        while(nota<0 || nota>20){
            cout<<"EROOR, TU CALIFICACION NO DEBE SER MENOR A 0 Y NO DEBE SER MAYOR A 20 "<<endl;
            cout<<"INGRESA LA CALIFICACION NUEVAMENTE "<<endl;
            cin>>nota;
        }
    }else{
        cout<<"El nombre de la persona es: "<<nombre<<endl;
        cout<<"El peso es: "<<peso<<endl;
        cout<<"La nota de la persona es: "<<nota<<endl;
    }
    return 0;
}