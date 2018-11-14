



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



    return 0;
}