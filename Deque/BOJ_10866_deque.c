#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define OFFSET 5000
int DEQUE[2 * OFFSET + 1];
int head = OFFSET;
int tail = OFFSET;

int	is_empty()
{
	if (head == tail)
		return (1);
	else
		return (0);
}

void	push_front()
{
	int num;
	scanf("%d", &num);
	DEQUE[--head] = num;
}
void	push_back()
{
	int num;
	scanf("%d", &num);
	DEQUE[tail++] = num;
}
void	pop_front()
{
	if (is_empty())
		printf("%d\n", -1);
	else
	{
		printf("%d\n", DEQUE[head]);
		head++;
	}
}
void	pop_back()
{
	if (is_empty())
		printf("%d\n", -1);
	else
	{
		printf("%d\n", DEQUE[tail - 1]);
		tail--;
	}
}
void	size()
{
	printf("%d\n", tail - head);
}
void	front()
{
	if (is_empty())
		printf("%d\n", -1);
	else
		printf("%d\n", DEQUE[head]);
}
void	back()
{
	if (is_empty())
		printf("%d\n", -1);
	else
		printf("%d\n", DEQUE[tail - 1]);
}
void	empty()
{
	if (is_empty())
		printf("%d\n", 1);
	else
		printf("%d\n", 0);
}

int main()
{
	int comm_num;
	int idx;
	char comm[20];
	scanf("%d", &comm_num);

	idx = 0;
	while (idx < comm_num)
	{
		scanf("%s", &comm);
		if (strcmp(comm, "push_front") == 0)
			push_front();
		else if (strcmp(comm, "push_back") == 0)
			push_back();
		else if (strcmp(comm, "pop_front") == 0)
			pop_front();
		else if (strcmp(comm, "pop_back") == 0)
			pop_back();
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