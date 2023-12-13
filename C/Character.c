# include <stdio.h>
int main ()
{
    int x;
    printf ("Enter the number");
    scanf ("%d", &x);
    printf ("%d", x>=0 && x<10);
    return 0;
}