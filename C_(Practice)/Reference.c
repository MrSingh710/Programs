# include <stdio.h>
# include <math.h>
int sum(int *a, int *b);
int sub(int *a, int *b);
int mul(int *a, int *b);
int power(int *a, int *b);
int main ()  {
    int a, b;
    printf ("Enter the two numbers: ");
    scanf ("%d %d", &a, &b);
    printf ("%d\n", sum(&a, &b));
    printf ("%d\n", sub(&a, &b));
    printf ("%d\n", mul(&a, &b));
    printf ("%d\n", power(&a, &b));
}
int sum(int *a, int *b)  {
    return *a+*b;
}
int sub(int *a, int *b)  {
    return *a-*b;
}
int mul(int *a, int *b)  {
    return *a**b;
}
int power(int *a, int *b)  {
    return pow(*a,*b);
}