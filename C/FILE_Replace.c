# include <stdio.h>
int main ()  {
    FILE *fptr;
    fptr=fopen("Numbers_Sum.txt", "r" );
    int n1, n2;
    fscanf (fptr, "%d", &n1);
    fscanf (fptr, "%d", &n2);
    fclose (fptr);
    fptr=fopen("Numbers_Sum.txt", "w" );
    fprintf (fptr, "%d", n1+n2);
    fclose (fptr);
}