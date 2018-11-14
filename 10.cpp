#include <iostream>
#include<string.h>
using namespace std;

void burbujaOrdenAlfabeto(string vector[],int LEN){
    int i,j;
    string temp;
    string A , B;
    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {
            if( strcmp(vector[j].c_str() , vector[j+1].c_str() ) > 0  ) {
                temp        = vector[j];
                vector[j]   = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
}


void burbujaNumeroCaracteres(string vector[],int LEN){
    int i,j;
    string temp;
    string A , B;
    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {
            if( strlen(vector[j].c_str()) > strlen(vector[j+1].c_str()) ) {
                temp        = vector[j];
                vector[j]   = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
}


void ordenarCadenas(string vec[], int n){
    burbujaOrdenAlfabeto(vec,n);
    burbujaNumeroCaracteres(vec,n);
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

    for ( int i = 0; i < LEN; i++ ) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
