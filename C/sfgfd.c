# include <stdio.h>
int main ()
{
    int a;
    printf ("Enter the number");
    scanf ("%d", &a);
    int c=1;
    for (a; a>=1; a--)
    {
        c *= a;
    }
    printf ("The factorial of the entered number is %d", c);
    return 0; 
}