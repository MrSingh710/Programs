# include <stdio.h>
int main ()
{
    int a=1;
    while (a<=50)
    {
        a=a+(a+1);
        a++;
    }
    printf ("%d", a);  
    return 0; 
} 