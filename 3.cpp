#include <iostream>
using namespace std;

int main() {

    int LEN,i,j,opcion,pos;
    cin >> LEN;

    char alfabeto[LEN];
    char temp;

    for ( i = 0; i < LEN; i++ ) {
        cin >> alfabeto[i];
    }

    cin >> opcion;

    if ( opcion==1 ) { // SELECCION
        for( i=0 ; i<(LEN-1) ; i++ ){
            pos=i;
            for( j=i+1 ; j<LEN ; j++ ){
                if( alfabeto[pos] > alfabeto[j] )
                    pos=j;
            }
            if( pos!=i ){
                temp       = alfabeto[i];
                alfabeto[i]   = alfabeto[pos];
                alfabeto[pos] = temp;
            }
        }
    }
    else if( opcion == 2 ){ // BURBUJA
        for( i = 0 ; i < LEN ; i++ ) {
            for( j = 0 ; j < LEN-1 ; j++ ) {
                if( alfabeto[j] < alfabeto[j+1] ) {
                    temp       = alfabeto[j];
                    alfabeto[j]   = alfabeto[j+1];
                    alfabeto[j+1] = temp;
                }
            }
        }
    }
    // INFERENCIA de la opcion==3

    for ( i = 0; i < LEN-1; i++ ) {
        cout << alfabeto[i] << " ";
    }
    cout << alfabeto[LEN-1] << endl;

    return 0;
}