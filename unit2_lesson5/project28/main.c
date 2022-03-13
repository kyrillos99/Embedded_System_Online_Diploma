
#include <stdio.h>
#include <stdlib.h>
void rev_sentence();
int main()
{
  printf("Enter a sentence: ");
  rev_sentence();
  return 0;
}
void rev_sentence()
{
   char str;
  scanf("%c",&str);
   if(str!='\n')
   {
       rev_sentence();
       printf("%c",str);

   }
}
