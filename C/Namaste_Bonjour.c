# include <stdio.h>
void Namaste();
void Bonjour();
int main()  {
    char ch;
    printf ("If you are an Indian, press i but if you are a French, press f:");
    scanf ("%c", &ch);
if ( ch== 'i')  
    Namaste();  
    else
    Bonjour();
    return 0; 
}
void Namaste()  {
    printf ("Namaste");
}
void Bonjour()  { 
    printf ("Bonjour");
}