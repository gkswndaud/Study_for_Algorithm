#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	int	max;
	int num_arr[100001];
	int num;
	int idx;
	int pos;
	int sum;

	scanf("%d", &max);
	idx = 0;
	pos = 0;
	sum = 0;
	while (idx < max)
	{
		scanf("%d", &num);
		if (num == 0 && pos != 0)
		{
			pos--;
		}
		else
		{
			num_arr[pos] = num;
			pos++;
		}
		idx++;
	}
	idx = 0;
	while (idx < pos)
		sum += num_arr[idx++];
	printf("%d\n", sum);
}