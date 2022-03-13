#include <stdio.h>
#include <stdlib.h>
 int fact(int num);
int main()
{
   printf("\nfactorial(10) = %d",fact(10));
    printf("\nfactorial(0) = 1 ");
    printf("\nfactorial(5) = %d",fact(5));
}
   int fact(int num)
   {
       int i=1;
       for(;num>0;num--)
       {
       i=num*i;
       }
       return i;
   }
