#include "..\Headers\Mstring.h"
#include "..\Headers\Calc.h"


void Position(int *pos, int x)
{
    *pos = -1;
    while (*pos < 0 || *pos > x)
    {
        printf("\nNhap vi tri trong khoang 0 <= k < %d: ", x);
        scanf("%d", pos);
    }
}

bool IsEqual(int *a, int x, int *b, int y)
{
    int i = 0;
    if (x != y)
        return false;

    for (; i < x; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

void Insert(int *a, int x, int *b, int y, int pos)
{
    int i;
    for (i = x + y - 1; i >= pos; i--)
    {
        a[i] = a[i - y];
    }
    for (i = pos; i < pos + y; i++)
    {
        a[i] = b[i - pos];
    }
}