#ifndef MSTRING_H_INCLUDED
#define MSTRING_H_INCLUDED
#include <stdbool.h>

bool IsEqual(int *a, int x, int *b, int y);
void IntPutArr(int *a, int *x);
void OutPutArr(int *a, int x);
void Position(int *pos, int x);
void Insert(int *a, int x, int *b, int y, int pos);

#endif