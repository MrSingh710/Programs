# include <stdio.h>
int main () 
 {
    int a, b;
    printf ("Enter the value of 2 numbers\n");
    scanf ("%d %d", &a, &b);
    printf ("Sum is %d\n", a+b);
    printf ("Subtraction is %d\n", a-b);
    printf ("Multiplication is %d\n", a*b); 
    printf ("Division is %d\n", a/b);
    printf ("Modulus is %d\n", a%b);
    return 0;
}