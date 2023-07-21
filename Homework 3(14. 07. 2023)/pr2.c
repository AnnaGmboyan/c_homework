/*.Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր և տպում է այդ թվերի ամենամեծ ընդհանուր բաժանարարը:*/

#include <stdio.h>
int main(){
int num1 = 0;
int num2 = 0;
int num3 = 0;
int smallest = 0;
int greatest_divisor = 1;
printf("num1 = ");
scanf("%i", &num1);
printf("num2 = ");
scanf("%i", &num2);
printf("num3 = ");
scanf("%i", &num3);
 if( num1 <= num2){
 smallest = num1;
 }else smallest = num2;
 if (smallest >= num3){
 smallest = num3;
 }

for(int i = 2; i <= smallest; i++){
	if(num1 %i == 0 && num2 %i == 0 && num3 %i == 0)
		greatest_divisor = i;

}
printf("The greatest devisor is %i.\n", greatest_divisor);
return 0;
}
