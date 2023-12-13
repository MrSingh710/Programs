# include <stdio.h>
# include <math.h>
int main ()
{
    int x, i, j, k, a, sum_cube;
    printf ("Enter the number");
    scanf ("%d", &x);
    i=x%10;
    a=x/10;
    j=a%10;
    k=a/10;
    sum_cube=(i*i*i)+(j*j*j)+(k*k*k);
    if (x==sum_cube) {
        printf ("This is an armstrong number");
    }
    else {
        printf ("This is not an armstrong number");
    }
    return 0;
}