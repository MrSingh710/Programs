# include <stdio.h>
int main ()
{
    int age;
    printf ("Enter the age");
    scanf ("%d", &age);
    if (age >= 18) 
    printf ("Person is adult"); 
    else if (age>13 && age<18) 
    printf ("Person is a teenager"); 
    else 
    printf ("He/She is a child");
    return 0;
}