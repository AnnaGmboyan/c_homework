/*3.Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված մուտքագրում և տպում այն հակառակ հերթականութամբ*/
 #include <stdio.h>
int main()
{
  int i = 0;
  char arr[5];
  printf("Enter 5 characters: ");
  while(i < 5)
  {
   scanf(" %c", &arr[i]);
  ++i;
  }
  while(i >= 0)
  {
	  printf("%c\n", arr[i]);
	  --i;
  }
	return 0;
}
