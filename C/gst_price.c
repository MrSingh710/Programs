# include <stdio.h>
# include <math.h>
float ar_sqr(float x);
void main ()  {
    float x;
    printf ("Enter the number");
    scanf ("%f", &x);
    sqr(x);
}
float sqr(float x)  {
    printf("%f", pow(x,2));
}