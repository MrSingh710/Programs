# include <stdio.h>
int main() {
int a, b, s;
printf ("Put the value of a and b\n");
scanf ("%d %d", &a, &b);
printf ("The value of a is %d and b is %d\n", a, b);
printf ("Put any number to swap the values\n");
scanf ("%d", &s);
printf ("The swapped value of a is %d and b is %d", b, a);
return 0;  }