#include <stdio.h>
#define ROWS 3
#define COLS 3

int main()
{
	int row, column;

	int A[ROWS][COLS] = { {1,1,1}, {2,2,2},{3,3,3} };
	int B[ROWS][COLS] = { {2,2,2},{3,3,3},{1,1,1} };
	int C[ROWS][COLS];

	printf("%d", A[ROWS][COLS]);
	printf("%d", B[ROWS][COLS]);
	
	/*for (row = 0; row < ROWS; row++)
	{
		for (column = 0; column < COLS; column++)
		{
			C[row][column] = A[row][column] * B[row][column];
			C[row][column] += C[row][column];
			printf("%d ", C[row][column]);
		}
		printf("\n");
	}*/

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{

			}
		}
	}
	return 0;
}