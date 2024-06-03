#include <stdio.h>


void imprimirMatriz(int matriz[][2], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void multiplicarMatrices(int matriz1[][2], int matriz2[][2], int resultado[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}


void sumarMatrices(int matriz1[][2], int matriz2[][2], int resultado[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}


void restarMatrices(int matriz1[][2], int matriz2[][2], int resultado[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

int main() {
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int resultado[2][2];

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1, 2, 2);

    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2, 2, 2);

    
    multiplicarMatrices(matriz1, matriz2, resultado);
    printf("\nProducto de matrices:\n");
    imprimirMatriz(resultado, 2, 2);


    sumarMatrices(matriz1, matriz2, resultado);
    printf("\nSuma de matrices:\n");
    imprimirMatriz(resultado, 2, 2);

    restarMatrices(matriz1, matriz2, resultado);
    printf("\nResta de matrices:\n");
    imprimirMatriz(resultado, 2, 2);

    return 0;
}
