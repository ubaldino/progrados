#include <iostream>
using namespace std;

int main() {

    int LEN;// tamanio de filas
    cin >> LEN;
    int personas[LEN][3];
    int i,j;

    for ( i = 0; i < LEN ; i++ ) {
        cin >> personas[i][0];// codigo
        cin >> personas[i][1];// CI
        cin >> personas[i][2];// EDAD
    }
    int temp[3];
    for( i = 0 ; i < LEN ; i++ ) {
        for( j = 0 ; j < LEN-1 ; j++ ) {

            if( personas[j][2] > personas[j+1][2] ) {

                temp[0] = personas[j][0];
                temp[1] = personas[j][1];
                temp[2] = personas[j][2];

                personas[j][0] = personas[j+1][0];
                personas[j][1] = personas[j+1][1];
                personas[j][2] = personas[j+1][2];

                personas[j+1][0] = temp[0];
                personas[j+1][1] = temp[1];
                personas[j+1][2] = temp[2];
            }
        }
    }


    for ( i = 0; i < LEN ; i++ ) {
        for ( j = 0; j < 3; j++ ) {
            cout << personas[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}