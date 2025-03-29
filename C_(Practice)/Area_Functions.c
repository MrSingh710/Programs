# include <stdio.h>
# include <math.h>
float ar_sqr(float x);
float ar_circle(float r);
float ar_rect(float a, float b);
void main ()  {
    float x, r, a, b;
    printf ("Enter the side of the square:");
    scanf ("%f", &x);
    printf ("Enter the radius of the circle:");
    scanf ("%f", &r);
    printf ("Enter the length and breadth of the rectangle:");
    scanf ("%f %f", &a, &b);
    printf ("%f\n", ar_sqr(x));
    ar_circle(r);
    ar_rect(a,b);
}
float ar_sqr(float x)  {
    return x*x;
}
float ar_circle(float r)  {
    printf ("%f\n", 3.14*r*r);
}
float ar_rect(float a, float b)  {
    printf ("%f\n", a*b);
}