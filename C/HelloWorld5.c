# include <stdio.h>
void HW(int n);
void main()  {
    int n;
    printf ("How many times you want to print?");
    scanf ("%d", &n);
    HW(n);
}
void HW(int n)  {
    if (n==0)  {
        return;
    }
    printf ("Hello World\n");
    HW(n-1);
}