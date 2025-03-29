# include <stdio.h>
int sum();
int main()  {
    int a, b;
    printf ("Enter the two numbers");
    scanf ("%d %d", &a, &b);
    sum(a,b);
    printf ("The sum of numbers is %d", sum(a,b));
    return 0;
}
int sum(int a, int b) {
    return a+b;
}
