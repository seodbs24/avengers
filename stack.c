#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int top = -1;
typedef int element;
element stack[SIZE];

int stack_full(){
	return top == SIZE - 1;
}
int stack_empty(){
	return top == -1;
}
void push(){
	if (stack_full())
	{
		printf("stack이 가득 차서 push할 수 없습니다.");
		return;
	}
	stack[++top];
}
void pop(){
	if (stack_empty())
	{
		printf("stack이 텅 비어서 pop할 수 없습니다.");
		return;
	}
	stack[top--];
}

int main()
{


}