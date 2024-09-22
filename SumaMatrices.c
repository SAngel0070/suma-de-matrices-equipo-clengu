#include <stdio.h>

/**
    *author: Lara Patricio Roberto Angel, Peña Sanchez Angel Eduardo, Santiago Garibay Sebastian
    *date: 28/11/2020
    *description: Suma de matrices
    */

#define MAX 100

void ingresarMatriz(int filas, int columnas, int matriz[MAX][MAX]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Introduce el elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int filas, int columnas, int matriz[MAX][MAX]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void sumarMatrices(int filas, int columnas, int matriz1[MAX][MAX], int matriz2[MAX][MAX], int resultado[MAX][MAX]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int filas, columnas;
    int matriz1[MAX][MAX], matriz2[MAX][MAX], suma[MAX][MAX];

    // Pedir tamaño de las matrices
    printf("Introduce el número de filas: ");
    scanf("%d", &filas);
    printf("Introduce el número de columnas: ");
    scanf("%d", &columnas);

    // Ingresar primera matriz
    printf("Introduce los elementos de la primera matriz:\n");
    ingresarMatriz(filas, columnas, matriz1);

    // Ingresar segunda matriz
    printf("Introduce los elementos de la segunda matriz:\n");
    ingresarMatriz(filas, columnas, matriz2);

    // Sumar matrices
    sumarMatrices(filas, columnas, matriz1, matriz2, suma);

    // Mostrar el resultado
    printf("\nLa matriz resultante de la suma es:\n");
    mostrarMatriz(filas, columnas, suma);

    return 0;
}
