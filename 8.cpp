#include <iostream>
using namespace std;

int busquedaPosicion(int v[], int n){
    int i;
    int valorMenor[1][2];
    valorMenor[0][0]=v[0]; // VALOR
    valorMenor[0][1]=0; // POSICION
    for ( i = 1; i < n ; i++ ) {
        if ( v[i] <= valorMenor[0][0] ) {
            valorMenor[0][0]=v[i];
            valorMenor[0][1]=i;
        }
    }
    return valorMenor[0][1] + 1 ;
}

int main() {

    int vec[]={8, 7, 5, 2, 4, 9, 3, 4, 7, 2, 6, 3, 6, 2, 5, 8, 7, 9};

    // OBTENER TAMANIO para el vector
    int LEN=end(vec)-begin(vec);

    cout << busquedaPosicion( vec , LEN ) << endl ;

    return 0;
}