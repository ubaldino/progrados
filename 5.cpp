#include <iostream>
using namespace std;

int main() {

    int bermejo[]={298,67,90};
    int tarija[]={99,55,66,78};

    // OBTENER TAMANIO para el vector bermejo
    int B_LEN=end(bermejo)-begin(bermejo);

    // OBTENER TAMANIO para el vector tarija
    int T_LEN=end(tarija)-begin(tarija);

    int todo[B_LEN+T_LEN]; // DEFINIENDO vector para unirlos

    int i,j=0,temp;

    // ingresando datos de bermejo
    for ( i = 0; i < B_LEN; i++ ) {
        todo[j++]=bermejo[i];
    }

    // ingresando datos de tarija
    for ( i = 0; i < T_LEN; i++ ) {
        todo[j++]=tarija[i];
    }

    // Ordenando los el vector de la union
    for( i = 0 ; i < B_LEN+T_LEN ; i++ ) {
        for( j = 0 ; j < B_LEN+T_LEN -1 ; j++ ) {
            if( todo[j] > todo[j+1] ) {
                temp       = todo[j];
                todo[j]   = todo[j+1];
                todo[j+1] = temp;
            }
        }
    }

    // imprimiendo vector ordenado de tarija y bermejo unidos
    for ( i = 0; i < B_LEN+T_LEN; i++ ) {
        cout << todo[i] << " ";
    }
    cout << endl;


    // ordenando el vector bermejo DESCENDENTE
    for( i = 0 ; i < B_LEN ; i++ ) {
        for( j = 0 ; j < B_LEN-1 ; j++ ) {
            if( bermejo[j] < bermejo[j+1] ) {
                temp       = bermejo[j];
                bermejo[j]   = bermejo[j+1];
                bermejo[j+1] = temp;
            }
        }
    }

    // ordenando el vector tarija de manera DESC
    for( i = 0 ; i < T_LEN ; i++ ) {
        for( j = 0 ; j < T_LEN-1 ; j++ ) {
            if( tarija[j] < tarija[j+1] ) {
                temp       = tarija[j];
                tarija[j]   = tarija[j+1];
                tarija[j+1] = temp;
            }
        }
    }

    /*
    comprobando los primeros valores de ambos vectores
    por que nos aseguramos que en la primera
    posicion estan los valores mas altos
    */
    if(tarija[0]>bermejo[0])
        cout << "NOTA MAXIMA: TARIJA"<< endl;
    else
        cout << "NOTA MAXIMA: BERMEJO"<< endl;

    return 0;
}
