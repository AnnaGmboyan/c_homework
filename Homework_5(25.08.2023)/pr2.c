/*Իրականացնել ֆունկցիա,որը հաշվում և վերադարձնում է քառակուսային մատրիցի օժանդակ անկյունագծի տարրերի գումարը։*/


#include <stdio.h>
 int ank (int size, int arr[size][size])
{
	int summary = 0;
 for (int i = 0; i < size;  i++)
 {
  	for (int j = size - 1; j >= 0; j--)
  	{
   		if(j == size - 1 - i)
		{
			summary += arr[i][j];
			printf("%i: ", arr[i][j]);
  		}
	}	
 }
 printf("\nOjandak ankyunagci tarreri gumary havasar e %i", summary);

}

int main()
{  int chap = 0;
	printf("Enter the size of array: ");
	scanf("%i", &chap);
   int arr[chap][chap];

	for(int i = 0;  i < chap; i++)
	{
		for(int j = 0; j < chap; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	
	}
   ank(chap, arr);

return 0;
}
