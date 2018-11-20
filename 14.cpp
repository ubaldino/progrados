#include <iostream>
using namespace std;

int busquedaBinaria(int numero, int vec[], int tamanio){
    int limiteIzquierdo = 0;
    int limiteDerecho = tamanio - 1;
    int puntoMedio = 0;
    while (limiteIzquierdo <= limiteDerecho){
        puntoMedio = (limiteIzquierdo + limiteDerecho) / 2;
        if(vec[puntoMedio] < numero){
            limiteIzquierdo = puntoMedio + 1;
        }else if(vec[puntoMedio] > numero){
            limiteDerecho = puntoMedio -1;
        }else{
            return puntoMedio;
        }
    }
    return -1;
}

void posicionesParaOrdenar(int vec[], int n){
    int i,j,temp;
    int copia[n];

    for ( i = 0; i < n ; i++ ) {
        copia[i] = vec[i] ;
    }

    for( i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n-1 ; j++ ) {
            if(  vec[j] > vec[j+1] ) {
                temp     = vec[j];
                vec[j]   = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }

    for ( i = 0 ; i < n-1 ; i++ ) {
        cout << busquedaBinaria( copia[i] , vec , n )+1 << " ";
    }
    cout << busquedaBinaria( copia[n-1] , vec , n )+1 <<endl;

}
int main() {
    int LEN,i;
    cin >> LEN;
    int vec[LEN];

    for ( i=0 ; i<LEN ; i++ ) {
        cin >> vec[i];
    }

    posicionesParaOrdenar( vec , LEN  );

    return 0;
}
