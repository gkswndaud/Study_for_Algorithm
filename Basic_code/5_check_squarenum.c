/*
 * 문제 3
 * N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반환하는 함수
 * func3(int N)을 작성하라. N은 10억 이하의 자연수이다.
 *
 * func3(9) = 1,
 * func3(693953651) = 0,
 * func3(756580036) = 1
 */

#include <stdio.h>

int	func3(int a)
{
	int i;

	i = 0;
	while (i * i <= a)
	{
		if ((i * i) == a)
			return (1);
		i++;
	}
	return (0);
}

int	main()
{

	printf("%d\n", func3(9));
	printf("%d\n", func3(11));
	printf("%d\n", func3(16));

	return (0);
}

