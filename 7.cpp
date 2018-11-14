#include <iostream>
using namespace std;

void burbuja(char vector[],int LEN){
    int i,j;
    char temp;
    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {
            if( vector[j] > vector[j+1] ) {
                temp        = vector[j];
                vector[j]   = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
}

int cantidadDeRepetidos(char vec[], int n ){
    int i;
    int repetidas=0;
    int cont=1;

    for( i=1 ; i < n ; i++ ){
        if ( vec[i] == vec[i-1] )
            cont++;
        else {
            if ( cont > 1 ) {
                repetidas++;
            }
            cont = 1;
        }
    }
    if(cont>1){
        repetidas++;
    }
    return repetidas;
}

int main() {

    char vec[]={'t', 'r', 'a', 'y', 's', 'u', 'r', 't', 'b', 'x', 'y'};

    // OBTENER TAMANIO para el vector
    int LEN=sizeof(vec)/sizeof(vec[0]);

    burbuja( vec , LEN ); // ORDENAR

    cout << cantidadDeRepetidos( vec , LEN ) << endl ;

    return 0;
}
