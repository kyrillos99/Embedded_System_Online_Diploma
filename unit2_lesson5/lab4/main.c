#include <stdio.h>
#include <stdlib.h>
void array(int num);
int main()
{
  array(10);
}
void array(int num)
{
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            printf("%d\t",j);
        }
        printf("\r\n");
    }
}
