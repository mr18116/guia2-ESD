#include <stdio.h>

int main() {
    int i,j, suma;
    int filas ;
    int columnas;
    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);

    int matriz[filas][columnas];

    //Llenado de la matriz
    for ( i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
            printf("Ingrese un numero");
            scanf("%d",&matriz[i][j]);
        }
    }

    for ( i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
          //sumando los valores de todas las posicion en la variable suma
          suma = suma+ matriz[i][j];
        }
    }

    printf("Suma de todos los numeros de la matriz\n");
    printf("%d",suma);
    return 0;
}