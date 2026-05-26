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