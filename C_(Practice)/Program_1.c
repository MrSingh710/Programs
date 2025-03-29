# include <stdio.h>
int main ()  {
    int a, b;
    printf ("Enter the two numbers:");
    scanf ("%d %d", &a, &b);
    printf ("The values before swapping: a=%d and b=%d\n", a, b);
    int x=a;
    a=b;
    b=x;
    printf ("The swapped values: a=%d and b=%d", a, b);
    return 0;
}