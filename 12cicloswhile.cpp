/*
#include <iostream>
using namespace std;
int main() {
    int i = 1;// aqui inicializamos, y en la segunda iteracion va a valer 2
    while (i <= 10)//empieza la condicion
    {
        cout << i << endl;//imprimes i que es 1
        i++;//aqui suma al i que es 1. osae suma 1 al 1
    }
}
#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (i <=10){
        if (i > 3)break;
    cout << i << endl;
    i++;    
    }
}
*/
#include<iostream>
using namespace std;
int main(){
    float practica, teoria, participacion, notaFinal=0;
    cout<<"Ingresa la caificacion de la practica: ";
    cin>>practica;

    while(practica>10){
        cout<<"La calificacion no puede ser mayor a 10 "<<endl;
        cout<<"Ingresa nuevamente la calificacion de la practica "<<endl;
        cin>>practica;
    }

    cout<<"Ingresa la calificacion de la teoria: "<<endl;
    cin>>teoria; 

    while(teoria>10){
        cout<<"ERROR, LA CALIFICACION NO PUEDE SER MAYOR A 10 "<<endl;
        cout<<"INGRESE NUEVAMENTE LA CALIFICACION TEORIA"<<endl;
        cin>>teoria;
    }

    cout<<"Ingresa la calificacion Participacion: "<<endl;
    cin>>participacion;

    while(participacion>10){
        cout<<"ERROR, LA CALIFICACION NO PUEDE SER MAYOR A 10 "<<endl;
        cout<<"INGRESE NUEVAMENTE LA CALIFICACION PARTICIPACION"<<endl;
        cin>>participacion;
    }
practica *= 0.30;
teoria *= 0.60;
participacion *= 0.10;
notaFinal = practica + teoria + participacion;

cout<<"La nota final es: "<<notaFinal<<endl;

    return 0;
}