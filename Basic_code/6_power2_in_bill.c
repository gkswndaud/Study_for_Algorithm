/*
 * 문제 4
 * N이하의 수중에서 가장큰 2의 거듭제곱수를 반환하는 함수 func4(int N)을 작석하라.
 * N은 10억 이하의 자연수이다.
 *
 * func4(5) = 4,
 * func4(97615282) = 67108864,
 * func4(1024) = 1024
 */

#include <stdio.h>

int	func4(int N)
{
	int result;

	result = 2;
	while (1)
	{
		if (result > N)
			return (result / 2);
		result *= 2;
	}
	return (0);
}

int main()
{
	printf("%d\n", func4(5));
	printf("%d\n", func4(97615282));
	printf("%d\n", func4(1024));

	return (0);
}
 
