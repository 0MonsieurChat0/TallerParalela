#include<stdio.h>

// Función para intercambiar los valores de dos variables utilizando punteros
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Antes del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    // Llamada a la función swap para intercambiar los valores de a y b
    swap(&a, &b);

    printf("Después del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

