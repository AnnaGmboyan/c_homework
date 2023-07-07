#include <stdio.h>
/* Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել որոշակի x և y ամբողջ թվային փոփոխականների արժեքները և կտպի էկրանին (x * y + 21 * x / y - 200) արտահայտության արդյունքը:*/

int main(){
 int x = 0;
 int y = 0;
 int val = 0;
printf("Enter x: ");
 scanf("%i", &x);
printf("Enter y: ");
 scanf("%i", &y);
 val = x * y + 21 * x / y - 200;
printf("%d\n", val);


}

