#include <stdio.h>
#include <stdlib.h>
int calc_power(int num,int pow);

int main()
{
int n1,n2;
 printf("Enter base number: ");
 scanf("%d",&n1);
 printf("Enter power number(positive integer): ");
  scanf("%d",&n2);
  printf("%d^%d = %d",n1,n2,calc_power(n1,n2));
  return 0;
}
int calc_power(int num,int pow)
{
if(pow!=0)
{
return (num*calc_power(num,pow-1));
}
else
{
return 1;
}
}
