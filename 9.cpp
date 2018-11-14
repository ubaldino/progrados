#include <iostream>
using namespace std;

void burbujaPares(int vector[],int LEN){
    int i,j;
    int temp;
    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {
            if( vector[j] > vector[j+1]   ) {
                temp        = vector[j];
                vector[j]   = vector[j+1];
                vector[j+1] = temp;
            }
            if( vector[j]%2!=0  ) {
                temp        = vector[j];
                vector[j]   = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
}

void burbujaImpares(int vector[],int LEN){
    int i,j;
    int temp;
    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {
            if( vector[j]%2!=0 && ( vector[j] > vector[j+1] ) ) {
                temp        = vector[j];
                vector[j]   = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
}

void ordenarParesImpares( int vec[] , int n ){
    burbujaPares( vec , n );
    burbujaImpares( vec , n );
}

int main() {

    int vec[]={8, 7, 5, 2, 4, 9, 3, 4, 7, 2, 6, 3, 6, 2, 5, 8, 7, 9}  ;
    // OBTENER TAMANIO para el vector
    int LEN=sizeof(vec)/sizeof(vec[0]);

    ordenarParesImpares( vec , LEN );

    for ( int i = 0; i < LEN; i++ ) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
