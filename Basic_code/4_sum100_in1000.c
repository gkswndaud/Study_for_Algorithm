/*
 * 문제 2
 * 주어진 길이 N의 int배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면
 * 1을, 존재하지 않으면 0을 반혼하는 함수 func2(int arr[], int N)을 작성하라.
 * arr의 각 수는 0이상 100이하이고 N은 1000이하이다.
 *
 * 예시
 * func2({1, 52, 48}, 3) = 1,
 * func2({50, 42}, 2) = 0,
 * func2({4, 13, 63, 87}, 4) = 1
 */

#include <stdio.h>

int	func2(int arr[], int n)
{
	int i;
	int j;

	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] + arr[j] == 100)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	int a[3] = {1, 52, 48};
	int b[2] = {50, 42};
	int c[4] = {4, 13, 63, 87};

	printf("%d\n",func2(a, 3));
	printf("%d\n",func2(b, 2));
 	printf("%d\n",func2(c, 4));

	return (0);
}
 
