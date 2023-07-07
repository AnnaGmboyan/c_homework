#include <stdio.h>
int main()
{
 char sym = '0';
  do 
  {
   printf("Enter a symbol: ");
   scanf(" %c", &sym);
   if (sym >= 65 && sym <= 90){
	   printf("You entered %c symbol\n", sym);
           break;
   }
  }
  while(sym < 65 || sym > 90);
	
 
 }
