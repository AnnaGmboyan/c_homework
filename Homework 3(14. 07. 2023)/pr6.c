/*3.Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ամբողջ թիվ, եթե թվի հինգերորդ բիթը եղավ 0 սարքում է մեկ և տպում էկրանին հակառակ դեպքում թիվը պարզապես տպել էկրանին։*/

#include <stdio.h>
int main(){
int  num = 0;
int bit = 0;
int stugum = 32;
printf("Enter a number: ");
scanf("%i", &num);
bit = num & 32;
if(bit == 32){
printf("%i\n", num);
}else  if(bit == 0){
 num = num +32;
 printf("%i\n", num);
}
return 0;
}
