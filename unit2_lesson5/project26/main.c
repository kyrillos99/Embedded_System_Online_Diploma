#include <stdio.h>
#include <stdlib.h>
int prime_numbers(int num);
int main()
{
int j,n1 ,n2 ,flag;
printf("Enter two numbers(intervals): ");
scanf("%d %d",&n1,&n2);
printf("prime numbers between %d and %d are:  ",n1,n2);
for(j=(n1+1);j<n2;j++)
{
    flag=prime_numbers(j);
    if(flag==0)
        printf("%d \t",j);
}
}
int prime_numbers(int num)
{
    int i,flag=0;
    for(i=2;i<=num/2;i++)
    {
      if(num%i==0)
            flag=1;
      }
      return flag;
}
