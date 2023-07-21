/*Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու ամբողջ թիվ, ստուգեք թվերը կարող են իրար վրա բաժանվել թե ոչ։*/

#include <stdio.h>
int main(){
 int num1 = 0;
 int num2 = 0;
 printf("Enter the first number: ");
 scanf("%i", &num1);
 printf("Enter the second number: ");
 scanf("%i", &num2);
 if(num1 == num2){
  printf("The numbers are divisible by one another.\n");
 } else if (num1 % num2 == 0){
 printf("%i  is  devisible by  %i.\n", num1, num2);
 } else if(num2 % num1 == 0){
 printf("%i  is  devisible by  %i.\n", num2, num1);
 } else{
 printf("The numbers can't  be divided by each other without a remainder.\n");
 }

return 0;
}
