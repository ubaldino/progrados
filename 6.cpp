#include <iostream>

using namespace std;


int mayorOcurrencia(int v[], int n){
    int i;
    int diccionario[4] = { 0 , 0  ,  0 , 0 };
    //                     0 , 1  ;  2 , 3
    // [ numero , repeticiones ; nunero: contador  ]
    diccionario[2]=v[0];
    diccionario[3]=1;
    for ( i = 1; i < n; i++ ) {
        if ( diccionario[2] != v[i] ) {
            // solo cambia de dato, si la cantidad de repeticiones es mayor
            if( diccionario[3] > diccionario[1] ){
                diccionario[0] = diccionario[2];
                diccionario[1] = diccionario[3];
            }
            diccionario[2] = v[i];
            diccionario[3] = 1;
        }
        else{
            diccionario[3] = diccionario[3]+1;
        }
        cout << v[i] << " ";
    }
    cout << endl;
    // nos aseguramos de retornar el numero repetido mas veces y por orden
    return diccionario[0];
}

int main() {
    int i,n,r,j,aux;
    int v[]={10,3,5,2,3,5,3,5,2,10,10,5,5,5}; // 3
    n=sizeof(v)/sizeof(v[0]);

    for( i=0 ; i<n ; i++ ){
        for( j=0 ; j<n ; j++ ) {
            if( v[i]==v[j] ){
                for ( r = j; r >= i+1; r-- ) {
                    aux    = v[r];
                    v[r]   = v[r-1];
                    v[r-1] = aux;
                }
            }
        }
    }
    cout << mayorOcurrencia( v , n ) << endl;
    return 0;
}
