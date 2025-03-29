#include<stdio.h>
void main(){
int maths, phy, chem, ED, CP;
printf("enter marks");
scanf("%d %d %d %d %d",&maths, &phy, &chem, &ED, &CP);
float per = ((maths+phy+chem+ED+CP)/500*100);
printf("%f",per);
if(per>=90)
printf("\nA");
else if(per>=80 && per<70)
printf("\nB");
else if(per>=70 && per<80)
printf("\nC");
else if(per>=60 && per<70)
printf("\nD");
else
printf("\nF");
}