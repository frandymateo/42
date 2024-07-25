#include <stdio.h>

// Declaración de la función ft_swap
void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;
    int y = 10;

    printf("Antes de ft_swap:\n");
    printf("x = %d, y = %d\n", x, y);

    // Llamada a la función ft_swap
    ft_swap(&x, &y);

    printf("Después de ft_swap:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
