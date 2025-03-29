#include<stdio.h>
int main ()
{
    int n, num;
    scanf ("%d", &n);
    for (int i=2; i<n; i++)
    {  num=n%2; 
    num=0;
    break;}
    if (num==0)
    { printf ("Not prime"); }
    else 
    { printf ("Prime"); }
    return 0;
    }