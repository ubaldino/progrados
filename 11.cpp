#include <iostream>
#include <string>
using namespace std;

void ordenarCadenas(string vec[], int n){
    int i,j;
    string temp;
    string A , B;
    for( i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n-1 ; j++ ) {
            // sentencias para revertir palabras
            A=string(vec[j].rbegin(), vec[j].rend());
            B=string(vec[j+1].rbegin(), vec[j+1].rend());
            if(  A > B ) {
                temp        = vec[j];
                vec[j]   = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}

int main() {
    int LEN;
    cin >> LEN;
    string vec[LEN];
    // OBTENER TAMANIO para el vector

    for (int i = 0; i < LEN;i++ ) {
        cin >> vec[i];
    }

    ordenarCadenas( vec , LEN );

    for ( int i = 0; i < LEN-1; i++ ) {
        cout << vec[i] << " ";
    }
    cout << vec[LEN-1] << endl;

    return 0;
}
