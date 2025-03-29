# include <stdio.h>
void swap_value (int,int);
int main () {
    int n1,n2;
    printf("Enter the numbers to be swappped: ");
    scanf("%d %d", &n1,&n2);
    swap_value(n1,n2); }
void swap_value (int n1, int n2)  {
    int x;
    x=n1;
    n1=n2;
    n2=x;
    printf ("%d %d", n1, n2);  
printf("The swapped values are %d and %d", n1, n2);  }