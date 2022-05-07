#include "..\Headers\Convert.h"


void DecToBin(int dec)
{
    int bin = 0, count = 0;
    while (dec > 0)
    {
        bin += (dec % 2) * pow(10, count);
        count++;
        dec /= 2;
    }
    printf("Chuyen sang nhi phan: 0xb%d\n", bin);
}

void DecToHexa(int dec)
{
    int hex, count = 0;
    int i;
    char HEX[100];
    while (dec > 0)
    {
        hex = dec % 16;
        if (hex < 10)
            HEX[count] = hex + 48; // hex + '0'
        else
            HEX[count] = hex + 55; // hex  - 10 + 'A' = hex - 10 + 65
        count++;
        dec /= 16;
    }
    printf("Chuyen sang he luc thap phan: 0x");
    for (i = count - 1; i >= 0; i--)
    {
        printf("%c", HEX[i]);
    }
}