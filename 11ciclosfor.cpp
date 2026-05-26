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

*/
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

