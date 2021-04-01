#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("Введите х {0.2 <= x <= 0.3} ");
    scanf("%lf", &x);
    if ((x >= 0.2) && (x <= 0.3))
    {
        double y = sqrt(sin(2.0 * x)) + sqrt(sin(3.0 * x));
        double z = pow(log(tan(y - M_PI / 8.0)), 0.25);
        printf("y(x)=%lf \n", y);
        printf("z(x)=%lf \n", z);
    }
    else
        printf("Недопустимо введенное значение \n");
    return 0;
}
