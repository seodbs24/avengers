#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int integers, array[3], i = 0;
	printf("입력할 정수의 개수 : ");
	scanf("%d", &integers);

	for (i; i < integers; i++)
	{
		printf("%d번째 요소를 입력하시오 : ", i+1);
		scanf("%d", &array[i]);
	}

	for (int i = integers - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
}
	return 0;