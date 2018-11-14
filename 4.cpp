#include <iostream>
using namespace std;

int main() {
    int LEN;
    cin >> LEN;
    int estudiantes[LEN];
    int estudiante;
    int i,j,temp;

    for ( i = 0; i < LEN; i++ ) {
        cin >> estudiantes[i];
    }

    cin >> estudiante; // RU A BUSCAR

    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {
            if( estudiantes[j] > estudiantes[j+1] ) {
                temp       = estudiantes[j];
                estudiantes[j]   = estudiantes[j+1];
                estudiantes[j+1] = temp;
            }
        }
    }

    int asistio=0; // VARIABLE POR DEFECTO QUE NO ASISTIO

    // ORDENAMIENTO BURBUJA
    int limiteIzquierdo = 0;
    int limiteDerecho = LEN - 1;
    int puntoMedio = 0;
    while (limiteIzquierdo <= limiteDerecho){
        puntoMedio = (limiteIzquierdo + limiteDerecho) / 2;
        if(estudiantes[puntoMedio] < estudiante){
            limiteIzquierdo = puntoMedio + 1;
        }
        else if(estudiantes[puntoMedio] > estudiante){
            limiteDerecho = puntoMedio -1;
        }
        else{
            asistio=1; // SE ENCONTRO AL ESTUDIANTE
            break;
        }
    }

    if (asistio==1)
        cout << estudiante << " ~> Asistio "<<endl;
    else
        cout << estudiante << " ~> No Asistio "<<endl;

    return 0;
}