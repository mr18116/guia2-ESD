#include <stdio.h>

int main() {
    int filas;
    int columnas;
    int i, j, suma;
    int desicion = 1;
    int posicionSumar;
    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);

    int matriz[filas][columnas];

    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas ; ++j) {
            printf("Ingrese un numero");
            scanf("%d",matriz[i][j]);
        }
    }

    printf("¿Que desea sumar?\nPresione 1 para filas o 2 para columnas");
    scanf("%d",&desicion);
    if (desicion==1){
        printf("¿Que fila desea sumar\n?");
        scanf("%d",&posicionSumar);
        for ( j = 0; j < columnas; ++j) {
            suma = suma + matriz[posicionSumar][j];
        }
    } else{
        printf("¿Que columna desea sumar\n?");
        scanf("%d",&posicionSumar);
        for ( i = 0; i < columnas; ++i) {
            suma = suma + matriz[i][posicionSumar];
        }
    }

    if (desicion == 1) {
        printf("Resultado de sumar la fila %d: %d \n", posicionSumar, suma);
    }else{
        printf("Resultado de sumar la columan %d: %d \n", posicionSumar, suma);
    }
    return 0;
}