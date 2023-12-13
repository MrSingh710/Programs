# include <stdio.h>
int main ()
{
   int a, b, op, ans;
   printf ("Enter the two numbers \n");
   scanf ("%d %d", &a, &b);
   printf ("Enter the operator");
   fflush (stdin);
   scanf ("%c", &op);
   printf ("The required answer is %d", ans);
   return 0;
}