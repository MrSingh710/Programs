# include <stdio.h>
int main ()  {
    int i=0;
    char name[]={'G','U','R','J','A','S','\0'};
    while (name[i]!='\0') {
        printf ("%c", name[i]);
        i++;
    }
    char _name[]="GURJAS";
    printf ("\n%s\n", _name);
    printf ("Enter the name: ");
    gets (name);
    puts (name);
}