/*Գրեք ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել տարի և տպում է՝ տարին նահանջ տարի է, թե ոչ:*/

#include <stdio.h>
 int main(){
int year = 0;
printf("Enter a year: ");
scanf("%i", &year);
 if(year %4 == 0 && year %100 != 0){
 printf("This is a leap year.\n");
 }else if(year % 400 == 0){
 printf("This is a leap year.\n");
 }else {
 printf("This year is not leap.\n");
}
 return 0; 
 }
