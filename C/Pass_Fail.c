# include <stdio.h>
int main ()
{
    int marks;
    printf ("Enter the marks");
    scanf ("%d", &marks);
    marks>=0 && marks<30 ? printf ("FAIL") : marks>=30 && marks<=100 ? printf ("PASS") : printf ("Wrong Number");
    return 0;  
}
    