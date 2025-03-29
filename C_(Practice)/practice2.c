# include <stdio.h>
int main ()  {
    int i, arr[10]={24, 45, 7, 89, 11, 66, 32, 60, 45, 5};
    int *p=arr+9;
    for (i=0; i<10; i++) {
        printf ("%d\t", *p--);
    }
    return 0;
 
}