#include <stdio.h>

/*Գրեք ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են տպել՝ այդ երեքից ամենամեծ թիվը։*/
 
int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
printf("Enter x: ");
 scanf("%i", &x);
printf("Enter y: ");
 scanf("%i", &y);
printf("Enter z: ");
 scanf("%i", &z);
  if(x == y){
    if(x > z) {
	    printf("%d\n", x);
	} else printf("%d\n", z);

  }else if(x == z){
  if(x > y) {
            printf("%d\n", x);
        } else printf("%d\n",y);

  }else if (y == z){
	if(x > z) {
            printf("%d\n", x);
        } else printf("%d\n", z);
	
  }

}
