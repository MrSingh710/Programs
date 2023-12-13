#include<stdio.h>
int main ()
{
    int n;
    printf ("Enter the number whose table is to be printed");
    scanf ("%d", &n);
    for (int i=1, j=1; i<=n, j<=10; i++, j++)
    {  printf ("%d x %d = %d\n", n, j, n*i);  }
    return 0;
    }