#include "..\Headers\Calc.h"

void IntPutArr(int *a, int *n)
{
    do
    {
        printf("\nNhap so phan tu mang: ");
        scanf("%d", n);
    } while (*n <= 0 || *n > 30);

    int i;
    for (i = 0; i < *n; i++)
    {
        printf("Phan tu thu %d: ", i);
        scanf("%d", a + i);
    }
}

void OutPutArr(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%5d", *(a + i));
    }
    printf("\n");
}

void Sum_arr(int *arr, int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Tong cac gia tri trong mang: %d\n", sum);
}

void Max_Arr(int *arr, int n)
{
    int max = *arr;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Gia tri lon nhat trong mang: %d\n", max);
}

void Min_Arr(int *arr, int n)
{
    int min = *arr;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Gia tri nho nhat trong mang: %d\n", min);
}

void Position_Arr(int *arr, int n, int value)
{
    int i, j, res[25], count = 0;
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            res[count] = i;
            ++count;
        }
    }
    printf("Vi tri cua %d trong mang: ", value);
    for (j = 0; j < count; j++)
    {

        printf("%d  ", res[j]);
    }
}