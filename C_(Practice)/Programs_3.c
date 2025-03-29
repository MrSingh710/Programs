# include <stdio.h>
int main ()  {
    int n, i, count=0, c;
    for (int n=2; n<=20; n++) {
        for (int i=2; i<=n; i++) {
            if (n%i==0)
            c=count++;
        }
    if (c<2)
    printf ("%d\n", n);
    count=0;
    }
}