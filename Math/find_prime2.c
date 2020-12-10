#include <stdio.h>

int n;
int i;

int find_prime()
{
	scanf("%d", n);

	if(n == 1)
		return (0);

  i = 2;
	while (i * i < n)
{
	if (i == n)
		return (0);
	i++;
}
return (1);
}
