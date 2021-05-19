#include <math.h>
#include <stdio.h>

unsigned int fi(int x, int y)
{
    int i;
    int f = 1;
    if (y)
      for (i = 1; i <= y; i++)
        f = f * x;
    return f;
}

unsigned int fr(int x, int y)
{
    if (y)
      return y > 1? fr(x, y - 1) * x : x;
    else
    return 1;
}

int main()
{
    int x, y;
    printf("Введите число —> ");
    scanf("%d", &x);
    printf("Введите степень —> ");
    scanf("%d", &y);
    printf("Cycle = %d\n", fi(x, y));
    printf("Recursion = %d\n", fr(x, y));
    return 0;
}
