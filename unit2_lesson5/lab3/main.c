#include <stdio.h>
#include <stdlib.h>
int find_name(char names[][14],int n,char name[]);
void main()
{
char name[14];
char names[5][14]={"kyrillos","makram","nader","mohamed","ahmed"};
printf("Enter your name:");
gets(name);
if(find_name(names,5,name)==1)
    {
    printf("welcome");
    }
else
 {

 printf("you are not exist");
 }
}
