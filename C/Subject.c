# include <stdio.h>
int main ()
{
    float total, per;
    printf ("Enter the total marks of the five subjects\n");
    scanf ("%f", &total);
    per=total/5;
    printf ("The percentage of the student is %f", per);
    if (per<=100 && per>=90)
    printf ("\nA Grade");
    else if (per<90 && per>=80)
    printf ("\nB Grade");
    else if (per<80 && per>=70)
    printf ("\nC Grade");
    else if (per<70 && per>=60)
    printf ("\nD Grade");
    else if (per<60 && per>=50)
    printf ("\nE Grade");
    else 
    printf ("\nFail");
    return 0;
}