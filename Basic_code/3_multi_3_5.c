/*
 * 문제 1
 * N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을
 * 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다.
 *
 * ex)
 * func1(16) = 60,
 * func1(34567) = 278812814
 * func1(27639) = 178254968
 */

#include <stdio.h>

long long func1(int a)
{
	int idx;
	long long ans;

	ans = 0;
	idx = 0;
	while (idx < a)
	{
		if (idx % 3 == 0 || idx % 5 == 0)
			ans += idx;
		idx++;
	}
	return (ans);
}

int main()
{
	printf("%d\n", func1(16));
	printf("%d\n", func1(34567));
	printf("%d\n", func1(27639));
}


