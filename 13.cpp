#include <iostream>
using namespace std;

void intercaladoParesImpares(int vec[], int n){
    int i,j,pivot;
    int temp;
    for( i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n-1 ; j++ ) {
            if(  vec[j] > vec[j+1]   ) {
                temp     = vec[j];
                vec[j]   = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }

    // intercalando pares
    for( j = 0 ; j < n ; j+=2 ) {
        pivot=j+1;
        while( vec[j]%2!=0 && pivot<n){
            temp = vec[pivot];
            vec[pivot] = vec[j];
            vec[j] = temp;
            pivot++;
        }
        if(vec[j]%2!=0) {
            break;
        }
    }

    // ordenando los impares restantes
    pivot = j;
    for( i = pivot ; i < n ; i++ ) {
        for( j = pivot ; j < n-1 ; j++ ) {
            if(  vec[j] > vec[j+1]   ) {
                temp     = vec[j];
                vec[j]   = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }

}

int main() {
    int LEN,i;
    cin >> LEN;
    int vec[LEN];

    for ( i=0 ; i<LEN ; i++ ) {
        cin >> vec[i];
    }

    intercaladoParesImpares( vec , LEN );

    for ( i = 0; i < LEN-1; i++ ) {
        cout << vec[i] << " ";
    }
    cout << vec[LEN-1] << endl;

    return 0;
}
