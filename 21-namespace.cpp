#include<iostream>
using namespace std;

namespace matematicas{
    int sumar(int numeroA, int numeroB, int numeroC){
        return numeroA+numeroB+numeroC;
    }
}

namespace operaciones{
    int sumar(int numeroA, int numeroB, int numeroC){
        return numeroA+numeroB+numeroC;
    }    
}


int main(){
    cout<<matematicas::sumar(4,7,9)<<endl;
    cout<<operaciones::sumar(5,9,2)<<endl;

    return 0;
}