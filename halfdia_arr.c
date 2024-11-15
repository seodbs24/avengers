#include <stdio.h>

int main()
{
	int arr[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	/*char arr[15][3] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14", "15"};*/
	int k = 0;

	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" %2d ", arr[k]);
			k++;
		}
		printf("\n");
	}
	int h = 0;
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" %2d ", arr[h]);
			h++;
		}
		printf("\n");
	}
	return 0;
}