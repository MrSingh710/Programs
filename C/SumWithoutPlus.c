#include <stdio.h>
int main()
{
int a, b, sum;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);
while(b != 0)
{
    // find carry and perform bitwise left shift
    int carry = (a & b) << 1;
    
    // perform bitwise XOR to find sum
    a = a ^ b;
    
    // assign carry as new value of b
    b = carry;
}

sum = a;
printf("Sum of the given numbers is %d.", sum);

return 0;
}
