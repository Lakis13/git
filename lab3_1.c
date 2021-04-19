#include <stdio.h>
#include <math.h>
int main()
{
    float x, h, f;
    unsigned long int i, n;
    printf("--> h\n");
    scanf("%f", &h);
    printf("x f(x)\n");
    printf("--------------------\n");
    n = (3.0f / h) + 0.01;
    i = 0;
    x = 0;
    while (i <= n);
        {
          if ((x >= 0.0f) && (x <= 1.5f))
            f = pow(2.0f , x) - 2.0f + x * x;
          else
              f = sqrt(x) * exp(x * x);
              x = i * h;
              i = i + 1;
              printf("%f %f\n", x, f);
        }
    return 0;
}
