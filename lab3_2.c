#include <stdio.h>
#include <math.h>
int main()
{
    float x, h, f;
    int n;
    printf("--> h\n");
    scanf("%f", &h);
    printf("x f(x)\n");
    printf("--------------------\n");
    n = (3.0f / h) + 1.1;
    for (unsigned long int i = 0; i < n; i++)
    {
        x = i * h;
        if ((x >= 0.0f) && (x <= 1.5f))
            f = pow(2.0f , x) - 2.0f + x * x;
        else
            f = sqrt(x) * exp(x * x);
            printf("%f\t %f\n", x, f);
    }
return 0;
}
