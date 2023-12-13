# include <stdio.h>
int sum(int n);
int main ()  {
    int n;
    printf ("Enter the number:");
    scanf ("%d", &n);
    int sum(n);
    printf ("Sum:%d", sum(n));
}
int sum(int n)  {{
    if (n==1)
    return 1;
}
    int summ=sum(n-1);
    int s=summ+n;
    return s;
}