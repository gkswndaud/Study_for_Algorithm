#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define MAX 0
int QUEUE[10000];
int head = 0;
int rear = 0;

int	is_empty()
{
	if (head == rear)
		return (1);
	else
		return (0);
}

void	push()
{
	int num;
	scanf("%d", &num);
	QUEUE[rear++] = num;
}
void	pop()
{
	if (is_empty())
		printf("%d", -1);
	else
	{
		printf("%d", QUEUE[head]);
		head++;
	}
}
void	size()
{
	printf("%d", rear - head);
}
void	front()
{
	if (is_empty())
		printf("%d", -1);
	else
		printf("%d", QUEUE[rear - 1]);
}
void	back()
{
	if (is_empty())
		printf("%d", -1);
	else
		printf("%d", QUEUE[head]);
}
void	empty()
{
	if (is_empty())
		printf("%d", 1);
	else
		printf("%d", 0);
}

int main()
{
	int comm_num;
	int idx;
	char comm[10];
	scanf("%d", &comm_num);

	idx = 0;
	while (idx < comm_num)
	{
		scanf("%s", &comm);
		if (strcmp(comm, "push") == 0)
			push();
		else if (strcmp(comm, "pop") == 0)
			pop();
		else if (strcmp(comm, "size") == 0)
			size();
		else if (strcmp(comm, "front") == 0)
			front();
		else if (strcmp(comm, "back") == 0)
			back();
		else if (strcmp(comm, "empty") == 0)
			empty();
		idx++;
	}
	return 0;
}