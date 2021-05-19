#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int A[])
{
    int i;
    for (i = 0; i < n; i++)
      A[i] = rand() % 11 - 5;
}

int ps(int a)
{
    return 2 * a;
}
int pc(int a)
{
    return a * a;
}
void pr(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
      printf("%4d ", A[i]);
      printf("\n");
}

int main()
{
    srand(time(NULL));
    int n;
    printf("n —> ");
    scanf("%d", &n);
    int A[n];
    fill(n, A);
    int i, k;
    pr(A, n);
    for (i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    if ((i != j) && (A[i] == A[j]))
{
    k = A[i];
    A[i] = ps(k);
    A[j] = pc(k);
}
pr(A, n);
return 0;
}
