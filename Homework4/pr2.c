/*Գրեք ծրագիր, որը օգտվողին թույլ կտա մուտքագրել char-երի զանգված և դուրս կբերի բոլոր թվերը:*/

#include <stdio.h>

int main()
{
	int i = 0;
	char arr[5];
        printf("Enter 5 characters:");
	while (i <= 4)
	{
		scanf(" %c", &arr[i] );
		++i;
	}
	 i = 0;
	while(i < 5){
	if(arr[i] >= 48 && arr[i] <= 57)
                printf("This character is a number :%c\n", arr[i]); 
	++i;
	}
	return 0;
}
