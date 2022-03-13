#include <stdio.h>
#include <stdlib.h>
 int fact(int num);
int main()
{
int n;
printf("Enter an positive integer: ");
scanf("%d",&n);
printf("factorial of %d = %d",n,fact(n));
}
 int fact(int num)
 {
     int i=1;
     for(;num>0;num--)
        i=num*i;
     return i;
 }
