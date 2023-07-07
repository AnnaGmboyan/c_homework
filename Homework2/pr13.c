#include <stdio.h>
/*Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:*/

int main()
{
 char sym = '0';
 printf("Enter a letter: ");
 scanf("%c", &sym);
 if( sym >= 65 && sym <= 90){
	 if(sym == 'A' || sym == 'I' || sym =='E' || sym =='O' || sym == 'U'){
	 printf("This letter is Vowel\n");
	 }else printf("This letter is Consonant\n");
   
 }else if( sym >= 97 && sym <= 122){
	 if(sym == 'a' || sym == 'i' || sym =='e' || sym =='o' || sym == 'u'){
         printf("This letter is Vowel\n");
         }else printf("This letter is Consonant\n");

 }else{ printf("This character is not a letter!\n");
 }
}
