#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[1001];
int top_num = 0;
int top = -1;

void stackpush(num)
{
	top_num++;
	top++;
	arr[top] = num;
	return;
}
void stackpop()
{
	if (top == -1)
	{
		printf("-1\n");
		return;
	}
	top_num--;
	printf("%d\n", arr[top]);
	top--;
}

void stacksize()
{
	printf("%d\n", top_num);
}

void stackempty()
{
	if (top != -1)
	{
		printf("0\n");
		return;
	}
	printf("1\n");
}

void stacktop()
{
	if (top== -1)
	{
		printf("-1\n");
		return;
	}
	printf("%d\n", arr[top]);
	return;
}

int main(void)
{
	int count;
	char order[10] = {0};
	printf("실행횟수: ");
	scanf("%d", &count);
	
	for (int i = 0; i < count; i++)
	{
		scanf("%s", order);
		if (strcmp(order, "push") == 0)
		{
			int push_num = 0;
			scanf("%d", &push_num);
			stackpush(push_num);
		}
		else if (strcmp(order, "pop") == 0)
		{
			stackpop();
		}
		else if (strcmp(order, "size") == 0)
		{
			stacksize();
		}

		else if (strcmp(order, "empty") == 0)
		{
			stackempty();
		}

		else if (strcmp(order, "top") == 0)
		{
			stacktop();
		}
		else
		{
			printf("다시 입력하세요");
		}
	}
	return 0;
}