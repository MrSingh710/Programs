# include <stdio.h>
int main ()  {
     int a;
    printf("Enter the year\n");
    scanf("%d", &a);
    if (a%4==0)
    printf ("This is a leap year");
    else 
    printf ("This is not a leap year");
    return 0;
}