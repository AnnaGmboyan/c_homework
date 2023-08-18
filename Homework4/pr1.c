/*Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել զանգվածի էլեմենտների արժեքները, այնուհետև դրանք տպել էկրանին: Զանգվածը կարող է լինել ցանկացած տիպի։*/


#include <stdio.h>
int main()
{
 int index = 0;
 int arr[10];
 printf("Enter 10 numbers: ");
 while(index < 10)
 {
 scanf("%d", &arr[index]);
 index ++;
 }
 index = 0;
 printf("\n"); 
 while(index < 10){
  printf("%d \n", arr[index] );
  index ++;
  }
return 0;
}
