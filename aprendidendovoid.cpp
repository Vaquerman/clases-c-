#include<iostream>
using namespace std;
//Las funciones se declaran afuera del main
int suma(){
    return 2 + 3;//return devuelve un valor, PERO NO ESTA OBLIGADA A IMPRIMIR EL VALOR.
}

int resta(){
    return 10-8;
}

int operacion(){
    return 2*20;
}

void suma2 (){
    cout<< 1+2<<endl;
}

void saludar(){
   cout<<"Hola mundo"<<endl;
}

string saludar2(){
    return "hello world\n";

}
int main(){
    suma(); 
    saludar();
    cout<<suma() + resta() + operacion()<<endl;
    cout<<saludar2()<<endl;
    cout<<saludar2();
    suma2();
    return 0;
}
