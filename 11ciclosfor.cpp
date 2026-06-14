/*
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    
}
=======================================================
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <10; i ++) {
        if (i == 3) {
            continue;
        }
    cout << i  << endl;
    
    }
}

=======================================================
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i <10; i ++) {
        if ( i > 2 && i < 6) {
            continue;
        }
    cout << i  << endl;
    
    }
}
    ===================================================
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 10; i ++) {
        if (i > 4){
            break;
        }
    cout << i << endl;    
    }
}
*/

#include<iostream>
using namespace std;
int main(){
    char pais[4];
    pais[0]='P';
    pais[1]='E';
    pais[2]='R';
    pais[3]='U';
    char letra = 'p';
    int num = 0;
    float num1 = 0;
    cout<<typeid(pais).name()<<endl;
    cout<<typeid(letra).name()<<endl;
    cout<<typeid(num).name()<<endl;
    cout<<typeid(num1).name()<<endl;
    for (int i = 0; i < 4; i++){
        cout<<pais[i];
    }
    return 0;
}



