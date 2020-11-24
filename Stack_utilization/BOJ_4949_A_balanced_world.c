#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define MAX 0
char sentence[101];

int main()
{
	char c;
	int i;
	int count;
	int flag;

	i = 0;
	flag = 1;
	sentence[i] = '\0';
	c = 0;
	count = 0;
	while ((c = getchar()))
	{
		if (c == '(' || c == '[')
			sentence[i++] = c;
		else if (c == ')')
		{
			if (i == 0 || sentence[i - 1] != '(')
				flag = 0;
			else
			{
				sentence[i - 1] = '\0';
				i--;
			}
		}
		else if (c == ']')
		{
			if (i == 0 || sentence[i - 1] != '[')
				flag = 0;
			else
			{
				sentence[i - 1] = '\0';
				i--;
			}
		}
		if (c == '.')
		{
			if (count == 0)
				break ;
			if (!flag)
				printf("no\n");
			else if (flag)
			{
				if (i != 0)
					printf("no\n");
				else
					printf("yes\n");
			}
			count = 0;
			i = 0;
			flag = 1;
		}
		else if(c != '\n' && c != '.')
			count++;
	}

	return 0;
}