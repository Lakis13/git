#include <math.h>
#include <stdio.h>

double
integral(unsigned long int n)
{
    double f = 0.0f;
    double x;
    double a = 0.0f, b = M_PI;
    long double h = (b - a) / n;
    for (unsigned long int i = 0; i < n; i++)
      {
        x = i * h + h / 2;
        if (x >= 0.0f && x <= M_PI / 2)
          f = f + (pow(2, x) - 2 + x * x);
        else
            f = f + sqrt(x) * exp((-x) * x);
      }
    return f * h;
}

int main()
{
    double i_n, i_2n;
    double e, r;
    double ref_val = 1.02481f;
    unsigned long int n = 2;
    printf("-—> ");
    scanf("%lf", &e);
    i_n = i_2n = integral(n);
    while (r >= e)
        {
          i_n = i_2n;
          n = n * 2;
          i_2n = integral(n);
          r = fabs(i_2n - i_n) / 3.0f;
          printf("N = %ld\tI = %.15lf\tDelta = %.15lf\n", n, i_2n, r);
        }

    printf("\nref_val = %lf\nI_n = %lf\nI_2n = %lf\n", ref_val, i_n, i_2n);
    return 0;
}
