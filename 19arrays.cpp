#include<iostream>
using namespace std;


/*
int main(){
    //variables
    char caja[4];//es una variable con 4 espacios donde se almacenan cosas
    caja[0]='h';
    caja[1]='o';
    caja[2]='l';
    caja[3]='a';
    //cout<<caja[0]<<caja[1]<<caja[2]<<caja[3]<<endl;
    for(int i=0; i<4; i++){
        cout<<caja[i];
    }
    return 0;
}
==================================================
int main(){
    //variables, esto es un arrays que contiene solo strings
    string caja[4]={
        "Juan",
        "Jorge",
        "Jose",
        "Ricardo"
        
    };
    
    cout<<caja[0]<<caja[2];
    return 0;
}

*/

int main(){
    //variables
    string nombre[5];

    for(int i=0; i<5; i++){
        cout<<"DAME UN NOMBRE: ";
        cin>>nombre[i];

    }

    cout<<"Nombres guardados: "<<endl;
    for(int i=0; i<5; i++){
        cout<<"Los nombres son: "<<nombre[i]<<endl;
    }
    return 0;
}

