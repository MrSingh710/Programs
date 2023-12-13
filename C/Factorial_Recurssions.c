# include <stdio.h>
int fact(int n);
int main ()  {
    int n;
    printf ("Enter the number:");
    scanf ("%d", &n);
    printf ("Factorial:%d", fact(n));
    return;
}
int fact (int n)  {
    int f;
    if (n==0)  {
    return 1;
    }
    f=fact(n-1)*n;
    return f;
}