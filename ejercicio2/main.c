#include <stdio.h>




int main() {
    int filas;
    int columnas;

    printf("Ingrese el numero de filas\n");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d", &columnas);

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];
    int matrizResultado[filas][columnas];

    int i, j;

    //Llenado de la matriz 1
    printf("Ingrese los valores para la matriz 1\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; ++j) {
            printf("Ingrese un numero");
            scanf("%d", &matriz1[i][j]);
        }
    }

    //Llenado de la matriz 2
    printf("Ingrese los valores para la matriz 2\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; ++j) {
            printf("Ingrese un numero");
            scanf("%d", &matriz2[i][j]);
        }
    }

    //sumando la matriz 1 con la matriz 2
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            //sumando la matriz 1 con la matriz 2 en la posiscion i, j
            //y poniendo el resultado en la posicion i, j
            matrizResultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }


    printf("\n");
    //Imprimir matriz resultado
    printf("Matriz resultado.....................");
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            printf("%d\t",matrizResultado[i][j]);
        }
    }



    return 0;
}