#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "..\Headers\Calc.h"
#include "..\Headers\Convert.h"
#include "..\Headers\Mstring.h"

#define MAX 20

void Calc(void)
{
    int arr[MAX];
    int n;
    printf("\nNhap mang Arr: ");
    IntPutArr(arr , &n);
    printf("\nXuat mang Arr: ");
    OutPutArr(arr, n);
    Sum_arr(arr, n);
    Max_Arr(arr, n);
    Min_Arr(arr, n);

    int value;
    printf("Tim vi tri gia tri trong mang: ");
    scanf("%d", &value);
    Position_Arr(arr, n, value);
    printf("\n");
}

void Covert(void)
{
    int dec;
    printf("\nNhap so thap phan: ");
    scanf("%d", &dec);
    DecToBin(dec);
    DecToHexa(dec);
    printf("\n");
}

void Mstring(void)
{
    int a[10];
    int b[10];
    int x, y, pos;

    printf("\nNhap mang A: ");
    IntPutArr(a, &x);
    printf("Xuat mang A:\n ");
    OutPutArr(a, x);

    printf("\nNhap mang B: ");
    IntPutArr(b, &y);
    printf("Xuat mang B:\n ");
    OutPutArr(b, y);

    if (IsEqual(a, x, b, y) == true)
        printf("Hai mang giong nhau");
    else
        printf("Hai mang khong giong nhau");

    Position(&pos, x);
    Insert(a, x, b, y, pos);
    OutPutArr(a, x + y);
}

int main(int argc, char const *argv[])
{
    
    Calc();
    Covert();
    Mstring();
    return 0;
}
