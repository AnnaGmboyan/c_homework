/*Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել չորս թիվ, եթե չորս թվերի գումարը հավասար է 0-ի տպել ամենափոքր թիվը:*/

#include <stdio.h>
int function(int num1, int num2)
{
	if(num1 >= num2){
	return num2;
	} else return num1;
}

	
int main(){
int n = 0;
int k = 0;
int l = 0;
int m = 0;
int sum = 0, result = 0;
printf("Enter 4  numbers: ");
scanf("%i", &n);
scanf("%i", &k);
scanf("%i", &l);
scanf("%i", &m);
 sum = n + k + m + l;
if(sum != 0){
	printf("Sum of the entered numbers isn't equal to 0.\n");
}else {
 result = function(n, k);
 result = function(result, l);
 result = function(result, m);
 printf("The smallest number is %i.\n", result); 
}

return 0;
}
