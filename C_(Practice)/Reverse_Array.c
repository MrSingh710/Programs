# include <stdio.h>
int main ()  {
    int arr[5], temp;
    printf ("Enter the array");
    for (int i=0; i<5; i++) {
        scanf ("%d", &arr[i]);
        printf (" %d\t", arr[i]);
    }
    for (int i=0; i<5/2; i++) {
        temp=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;
    }
    printf ("\nReversed array: "); 
    for (int j=0; j<5; j++) {
         printf (" %d\t", arr[j]);
    }
}