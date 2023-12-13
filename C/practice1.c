# include <stdio.h>
struct vectors {
    int x;
    int y;
}v1, v2, sum;
void printSum(struct vectors sum);
int main ()  {
    printf ("Enter the first vector: ");
    scanf ("%d %d", &v1.x, &v1.y);
    printf ("Enter the second vector: ");
    scanf ("%d %d", &v2.x, &v2.y);
    printSum(sum);
}
void printSum(struct vectors sum)  {
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf ("Sum: %di^+%dj^", sum.x, sum.y);
}