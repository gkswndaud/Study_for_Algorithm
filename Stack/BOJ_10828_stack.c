#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	int stack[10001];
	int count;
	int idx;
	int value;
	int curr;
	char comm[10];

	stack[0] = 0;

	scanf("%d", &count);

	idx = 1;
	curr = 1;
	value = 0;
	while (idx <= count)
	{
		scanf("%s", &comm);

		if (!(strcmp(comm, "push")))
		{
			scanf("%d", &value);
			stack[curr] = value;
			curr++;
		}
		else if (!(strcmp(comm, "pop")))
		{
			if (curr > 1)
			{
				printf("%d\n", stack[curr - 1]);
				stack[curr - 1] = 0;
				curr--;
			}
			else
				printf("%d\n",-1);
		}
		else if (!(strcmp(comm, "size")))
		{
			printf("%d\n", curr - 1);
		}
		else if (!(strcmp(comm, "top")))
		{
			if (curr > 1)
				printf("%d\n", stack[curr - 1]);
			else
				printf("%d\n",-1);
		}
		else if (!(strcmp(comm, "empty")))
		{
			if (curr > 1)
				printf("%d\n",0);
			else
				printf("%d\n",1);
		}
		idx++;
	}
}