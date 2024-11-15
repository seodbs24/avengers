#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main()
{
	int row, column;
	int arr[SIZE][SIZE];
	printf("최대 행과 열의 크기는 10입니다.\n행과 열의 크기를 사용자 지정 하십시오.\n");
	printf("행 개수 : ");
	scanf("%d", &row);
	printf("열 개수 : ");
	scanf("%d", &column);

	printf("\noriginal matrix\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = j + 1;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("\ntransposed matrix\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			for (int k = 0; k < column; k++)
			{
				if (i > j)
				{
					printf("%d ", arr[j][i]);
				}
				else if (i = j)
				{
					printf("%d ", arr[i][j]);
				}
				else
					printf("%d ", arr[j][i]);
			}
			printf("\n");
		}
	}
	return 0;
}