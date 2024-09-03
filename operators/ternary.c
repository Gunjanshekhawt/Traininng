#include<stdio.h>
int main ()
{

 int a,b,c;
 int max;
 printf("enter the value of a and b\n");
 scanf("%d %d %d",&a,&b,&c);

 max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
 printf("The maximum of %d and %d %d is: %d\n", a, b, c, max);

 return 0;

}
