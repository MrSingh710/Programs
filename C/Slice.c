# include <stdio.h>
void slice (char str[], int n, int m);
int main()  {
    int str[100], n, m;
    printf ("Enter the name: ");
    gets (str);
    printf ("Enter the indexes which are to be printed: ");
    scanf ("%d %d", &n, &m);
    slice (str, n, m);
}
void slice (char str[], int n, int m)  {
    for (int i=n-1; i<=m-1; i++) {
        printf ("%c", str[i]);
    }
}