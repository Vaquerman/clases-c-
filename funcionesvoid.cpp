/*#include<iostream>
using namespace std;

void sumaConVoid(){
    cout<<2+3<<endl;//void no ejecutara una funcion que tenga return 
}

int sumar (){
    cout<<"Hola soy la funcion sumar, y me ejecuto pero no voy a mostrar la suma"<<endl;
    return 2+4;//return hace la operacion no esta obligado a mostrar el resultado
}

//variables
int a=10;

int main(){
    sumaConVoid();
    cout<<a+sumar()<<endl;
    return 0;
}
*/    

#include<iostream>
using namespace std;
float compra_a, compra_b, compra_c;
int destino, calidad;
//variables, caidad y precio
//LIMA - HUANUCO
int limaHuanuco_a=45;
int limaHuanuco_b=35;
int limaHuanuco_c=30;
//LIMA - HUANCAYO
int limaHuancayo_a=38;
int limaHuancayo_b=33;
int limaHuancayo_c=28;
float oferta =0.05;//oferta del 5%











int main(){
    cout<<"seleccione su destino: "<<endl;
    cout<<"1. Lima - Huanuco "<<endl;  
    cout<<"2. Lima - Huancayo "<<endl;
    cout<<"presiona 1 o 2 para elegir tu destino: "<<endl;
    cin>>destino;

    cout<<"seleccione la calidad del servicio: "<<endl;
    cout<<"seleccione 1 para calidad a "<<endl;
    cout<<"seleccione 2 para calidad b "<<endl;
    cout<<"seleccione 3 para calidad c "<<endl;
    cin>>calidad;

    cout<<"cuantos boletos desea comprar: "<<endl;
    cout<<"lima - huanuco - calidad a: 45"<<endl;
    cout<<"lima - huanuco - calidad b: 35"<<endl;
    cout<<"lima - huanuco - calidad c: 30"<<endl;
    cout<<"lima - huancayo - calidad a: 38"<<endl;
    cout<<"lima - huancayo - calidad b: 33"<<endl;
    cout<<"lima - huancayo - calidad c: 28"<<endl;
    cout<<"elija cuantos quiere de calidad a"<<endl;
    cin>>compra_a;
    cout<<"elija cuantos quiere de calidad b"<<endl;
    cin>>compra_b;
    cout<<"elija cuantos quiere de calidad c"<<endl;
    cin>>compra_c;
    

    cout<<"tu monto a pagar es: "<<endl;


    return 0;
}