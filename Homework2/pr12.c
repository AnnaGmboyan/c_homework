#include <stdio.h>
/*Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false:*/

int main(){
 char sym = '0';
 printf("Enter a symbol: ");
 scanf("%c", &sym );
 if ( sym >= 48 && sym <= 57){
	 printf("True\n");
 }else {
 	printf("False\n");
 }
}

 
