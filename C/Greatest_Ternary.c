# include <stdio.h>
int main ()
{
    int a, b, c, greatest;
    printf ("Enter the numbers \n");
    scanf ("%d %d %d", &a, &b, &c);
    greatest= a>b?(a>c?a:c):(b>c?b:c);
    printf ("%d is greatest", greatest);
    return 0;  
}