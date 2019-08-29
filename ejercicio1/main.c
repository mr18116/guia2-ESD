#include <stdio.h>
#define filas 2
#define columnas 2



int main() {
    int matriz[filas][columnas];
    int i, j, x, y, auxiliar;

    //Llenado de arreglo
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; ++j) {
            printf("Ingrese un numero");
            scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimir matriz desordenada
    printf("Matriz desordenada.....................");
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            printf("%d\t",matriz[i][j]);
        }
    }

    //Ordenar la matriz
    for (i = 0; i < filas; ++i) {
        for (j = 0; j < columnas; ++j) {
            for (x = 0; x < filas; ++x) {
                for (y = 0; y < columnas; ++y) {
                    if (matriz[i][j] > matriz[x][y]){
                        auxiliar = matriz[i][j];
                        matriz[i][j] = matriz[x][y];
                        matriz[x][y] = auxiliar;
                    }
                }
            }
        }
    }

    printf("\n");
    //Imprimir matriz ordenada
    printf("Matriz ordenada.....................");
    for (i = 0; i < filas; ++i) {
        printf("\n");
        for (j = 0; j < columnas; ++j) {
            printf("%d\t",matriz[i][j]);
        }
    }



    return 0;
}