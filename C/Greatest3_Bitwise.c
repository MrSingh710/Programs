#include<stdio.h>
void main(){
int num1,num2,num3;
printf("Enter The Numbers");
scanf("%d %d %d",&num1,&num2,&num3);
if(num1>=num2 && num1>=num3){
printf("%d is greatest",num1);
}else if(num2>= num1 && num2>=num3){
printf("%d is greatest",num2);
}else{
printf("%d is greatest",num3);
}
}