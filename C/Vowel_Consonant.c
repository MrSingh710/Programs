#include <stdio.h>
#include <string.h>
int main ()  {
    int vowel=0, consonant=0;
    char st[100];
    printf ("Enter the sentence: ");
    gets(st);
    for (int i=0; st[i] != '\0'; i++) {
    if (st[i]=='a' || st[i]=='i' || st[i]=='e' || st[i]=='o' || st[i]=='u')
    vowel++;
    else
    consonant++;
    }
    printf ("Number of vowels:%d\n", vowel);
    printf ("Number of consonants:%d", consonant);
}