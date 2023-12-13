# include <stdio.h>
int main ()  {
    int a=6, b=3;
    printf ("Value of a&b is %d \n", a&b); //Bitwise AND Operator
    printf ("Value of a|b is %d \n", a|b); //Bitwise OR Operator
    printf ("Value of a^b is %d \n", a^b); //Bitwise XOR Operator
    printf ("Value of ~a is %d and ~b is %d  \n", ~a, ~b); //Bitwise NOT Operator
    printf ("Value of a<<b is %d \n", a<<b); //Left Shift Operator
    printf ("Value of a>>b is %d \n", a>>b); //Right Shift Operator
    return 0;
} 