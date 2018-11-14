#include <iostream>
using namespace std;

int main() {
    int LEN=6;
    float alumnos[LEN];
    int i,j;
    float temp;

    for (i = 0; i < LEN ; ++i) {
        cin >> alumnos[i];
    }

    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {
            if( alumnos[j] > alumnos[j+1] ) {
                temp         = alumnos[j];
                alumnos[j]   = alumnos[j+1];
                alumnos[j+1] = temp;
            }
        }
    }

    for ( i = 0; i < LEN-1; i++) {
        cout << alumnos[i] << " ";
    }
    cout << alumnos[LEN-1] << endl;




    return 0;
}