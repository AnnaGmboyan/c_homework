/*1. Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է քառակուսային մատրիցի գլխավոր անկյունագծի տարրերի գումարը։*/
#include <stdio.h>
 
void sum(int m, int arr[m][m])
{
       	int summery = 0;
	for(int i = 0; i < m; i++)
        {
                for(int j = 0; j < m; j++)
                {
                if (i == j)
                       summery += arr[i][j];
                }
        }

printf("Glxavor ankyunagci tarreri gumary havasar e %i\n", summery);

}


int main()
{	int sumof = 0;
	int k = 0;
	printf("Enter the size of square matrix: ");
	scanf("%i", &k);
	int arr[k][k];

	for(int i = 0; i < k; i++)
	{
		for(int j = 0; j < k; j++)
		{
		scanf("%i", &arr[i][j]);
		}
	  printf("\n");

	}
	sum(k, arr);
return 0;
}

