# include <stdio.h>
int Greatest(int *a, int *b, int *c);
int main ()  {
    int a, b, c;
    printf ("Enter the 3 numbers: ");
    scanf ("%d %d %d", &a, &b, &c);
    printf ("Greatest: %d", Greatest(&a, &b, &c));
}
int Greatest (int *a, int *b, int *c)  {
    if (*a>=*b && *a>=*c) {
        return *a; }
    else if (*b>=*a && *b>=*c) {
        return *b; }
    else {
        return *c; }  
}