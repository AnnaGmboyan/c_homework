#include <stdio.h>
/*Գրեք ծրագիր, թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը: */

int main(){
 int x = 0;
 int y = 0;
 
printf("Enter x: ");
 scanf("%i", &x);
printf("Enter y: ");
 scanf("%i", &y);
 if ( x > y){
 printf("%i is grater than %i\n", x, y);
 } else {
  printf("%i is grater than %i\n", y, x);
 }
}

