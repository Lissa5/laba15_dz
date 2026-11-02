#include <stdio.h> 
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    int n;
    int A[100];
    int min;
    int k = 0;

    printf("Введите количество элементов массива: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i + 1);
        scanf("%d", &A[i]);
    }

    min = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] == min)
        {
            break;
        }
        k++;
    }

    printf("\nМинимальный элемент: %d\n", min);
    printf("Количество элементов до минимального: %d\n", k);

    return 0;
}