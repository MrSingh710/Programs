# include <stdio.h>
# include <string.h>
int main()  {
    char pass[100];
    printf ("Enter the password: ");
    gets (pass);
    strcat (pass, "123");
    printf ("Salted form of the password: %s", pass);
}