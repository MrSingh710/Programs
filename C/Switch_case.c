#include<stdio.h>
int main(){
int a,b;
char oper;
printf("Enter The Numbers: ");
scanf("%d %d",&a,&b);
printf("Press '+'for addition\n"
"Press '-'for subtraction\n"
"Press '*'for multiplication\n"
"Press '/'for division\n"
"Press '%' for modulus\n");
fflush(stdin);
scanf("%c",&oper);
switch(oper)
{ case '+':
printf("%d %c %d = %d",a,oper,b,a+b);
break;
case '-':
printf("%d %c %d = %d",a,oper,b,a-b);
break;
case '*':
printf("%d %c %d = %d",a,oper,b,a*b);
break;
case '/':
printf("%d %c %d = %d",a,oper,b,a/b);
break;
case '%':
printf("%d %c %c = %d",a,oper,b,a%b);
break;
}
return 0;
}