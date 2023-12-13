# include <stdio.h>
int main()  {
    char name[100], count=0;
    printf ("Enter the name: ");
    gets (name);
    for (int i=0; name[i]!='\0'; i++)  {
        count++;
    }
    printf ("Length of the name: %d", count);
}