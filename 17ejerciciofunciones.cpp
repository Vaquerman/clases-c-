#include<iostream>
using namespace std;
//procedimientos y funciones, los procedimientos funcionan con void, son procedimientos sin retornos, se crea fuera de int main, y no usa return 0;
void mensaje(){
    cout<<"Hola Mundo"<<endl;
}
void operaciones(int cant, double precio){
    double subtotal=cant*precio;
    cout<<"Cantidad es: "<<cant<<endl;
    cout<<"Precio es: "<<precio<<endl;
    cout<<"Subtotal es: "<<subtotal<<endl;
}
int main(){
    int caja=8;
    double otracaja=35.6;
    mensaje();
    operaciones(caja,otracaja);
    return 0;
}