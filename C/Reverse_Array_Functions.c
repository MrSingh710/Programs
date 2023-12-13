# include <stdio.h>
void rev_arr(int arr[], int n);
void print_arr(int arr[], int n);
int main ()  {
    int arr[]={1,2,3,4};
    rev_arr(arr, 5);
    print_arr(arr, 5);
    return 0;
}
void print_arr(int arr[], int n)  {
    for (int i=0; i<n; i++)  {
        printf ("%d\t", arr[i]);
    }
    printf ("\n");
}
void rev_arr(int arr[], int n)  {
    for (int i=0; i<n/2; i++) {
        int firstval= arr[i];
        int secondval= arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
        printf ("%d", arr[i]);
    }
}