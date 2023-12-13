# include <stdio.h>
int main ()  {
    int age=22;
    int *ptr1=&age;
    int **ptr2=&ptr1;
    printf ("1  %d\n", age);
    printf ("2  %d\n", *(&age));
    printf ("3  %d\n", *ptr1);
    printf ("4  %d\n", **ptr2);
    printf ("5  %u\n", &age);
    printf ("6  %u\n", ptr1);
    printf ("7  %u\n", *ptr2);
    printf ("8  %u\n", *(&ptr2));
    printf ("9  %u\n", &ptr1);
    printf ("10 %u\n", ptr2);
    printf ("11 %u\n", &ptr2);
    return 0;
}  