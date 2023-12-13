# include <stdio.h>
int main () {
    FILE *fptr;
    fptr=fopen("HelloWorld.c", "r");
    char ch;
    ch=fgetc(fptr);
    while (ch!=EOF) {
        printf ("%c", ch);
        ch=fgetc(fptr);
    }
    printf ("\n");
    fclose(fptr);
}