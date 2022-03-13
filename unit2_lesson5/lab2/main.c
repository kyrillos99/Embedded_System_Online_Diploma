#include <stdio.h>
#include <stdlib.h>
int calcmin(int values[],int n);
int main()
{
    int xxx[10]={35,67,27,54,76,44,59,32,43,25};
    int yyy[5]={28,71,67,83,62};
    int zzz[13]={87,21,74,36,27,64,87,63,27,86,48,32,76};
    printf("\nmin_value of xxxvalues = %d ",calcmin(xxx,10));
    printf("\nmin_value of yyyvalues = %d ",calcmin(yyy,5));
    printf("\nmin_value of zzzvalues = %d ",calcmin(zzz,13));
}
int calcmin(int values[],int n)
{
    int i,minvalue;
    minvalue=values[0];
    for(i=0;i<n;i++)
    {
        if(values[i]<minvalue)
        minvalue=values[i];
    }
    return minvalue;
}
