# include <stdio.h>
int odd_arr(int arr[], int n);
int main ()  {
    int arr[6];
    printf ("Enter the numbers: ");
    for (int i=0; i<6; i++) {
        scanf ("%d", &arr[i]);
    }
    printf ("Number of odd numbers: %d", odd_arr(arr, 6));
}
int odd_arr(int arr[], int n) {
    int count=0, check;
    for (int i=0; i<n; i++) {
        check=arr[i]%2;
    if (check!=0) {
        count++;
    }  }
    return count;
}