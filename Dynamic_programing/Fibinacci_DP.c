#include <stdio.h>

int arr[50];

int fibonacci_DP(int x)
{
	if (x == 1)
		return (1);
	if (x == 2)
		return (2);
	if (arr[x] != 0)
		return (arr[x]);
	return (arr[x] = fibonacci_DP(x - 1) + fibonacci_DP(x - 2));
}

int main()
{
	int ans;

	ans = fibonacci_DP(30);

	printf("%d", ans);

	return (0);
}
