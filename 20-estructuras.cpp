//ESTRUCTURAS
#include<iostream>
using namespace std;

struct Persona{// agrupa informacion relacionada (tipo de estructura)
    string nombre;
    long long telefono;// long long sirve para numeros largos
    int edad;
};



int main(){
    Persona cliente[3];
    
    cliente[0].nombre="jorge";
    cliente[0].telefono=944395525;
    cliente[0].edad=43;

    cliente[1].nombre="ricardo";
    cliente[1].telefono=9473454823;
    cliente[1].edad=34;

    cliente[2].nombre="marcos";
    cliente[2].telefono=9413705427;
    cliente[2].edad=28;

    cout<<"EDAD POSICION 0 ES: "<<cliente[0].edad<<endl;
    cout<<"EDAD POSICION 1 ES: "<<cliente[1].edad<<endl;
    cout<<"EDAD POSICION 2 ES: "<<cliente[2].edad<<endl;



    return 0;
}













/*
#include<iostream>
using namespace std;

struct Persona{// agrupa informacion relacionada (tipo de estructura)
    string nombre;
    long long telefono;// long long sirve para numeros largos
    int edad;
};



int main(){
    Persona cliente;
    cliente.nombre="jorge";
    cliente.telefono=944395525;
    cliente.edad=43;
    cout<<"NOMBRE DEL CLIENTE: "<<cliente.nombre<<endl;
    cout<<"TELEFONO DEL CLIENTE: "<<cliente.telefono<<endl;
    cout<<"EDAD DEL CLIENTE: "<<cliente.edad<<endl;
    return 0;
}

*/



