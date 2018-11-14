#include <iostream>
using namespace std;

void burbuja(int vector[],int LEN){
    int i,j,temp;
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

void intercalacion(int vectorA[], int vectorB[], int lenA,  int lenB, int RES[]) {
    int i = 0, j = 0, k = 0;

    while (i<lenA && j <lenB) {
        if (vectorA[i] < vectorB[j])
            RES[k++] = vectorA[i++];
        else
            RES[k++] = vectorB[j++];
    }
    while (i < lenA)
        RES[k++] = vectorA[i++];
    while (j < lenB)
        RES[k++] = vectorB[j++];
}

int main() {

    int bermejo[]={98,67,100};
    int tarija[]={99,55,66,78};

    // OBTENER TAMANIO para el vector bermejo
    int B_LEN=sizeof(bermejo)/sizeof(bermejo[0]);

    // OBTENER TAMANIO para el vector tarija
    int T_LEN=sizeof(tarija)/sizeof(tarija[0]);

    int vectorMezcla[B_LEN+T_LEN]; // DEFINIENDO vector para unirlos

    int i ;

    burbuja(bermejo,B_LEN);
    burbuja(tarija,T_LEN);
    intercalacion( bermejo , tarija , B_LEN , T_LEN , vectorMezcla );

    // imprimiendo vector ordenado de tarija y bermejo unidos
    for ( i = 0; i < B_LEN+T_LEN; i++ ) {
        cout << vectorMezcla[i] << " ";
    }
    cout << endl;

    /*
    comprobando los primeros valores de ambos vectores
    por que nos aseguramos que en la primera
    posicion estan los valores mas altos
    */
    if(tarija[T_LEN-1]>bermejo[B_LEN-1])
        cout << "NOTA MAXIMA: TARIJA"<< endl;
    else
        cout << "NOTA MAXIMA: BERMEJO"<< endl;

    return 0;
}
