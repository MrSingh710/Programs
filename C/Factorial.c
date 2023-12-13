# include <stdio.h>
int main ()
{
    int a;
    printf ("Enter the number");
    scanf ("%d", &a);
    int c=1;
    for (int i=1; i<=a; i++)
    {
        c *= i;
    }
    printf ("The factorial of the entered number is %d", c);
    return 0; 
}