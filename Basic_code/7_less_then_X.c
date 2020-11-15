/*
 * 문제
 * 정수 N개로 이루어진 수열 A와 정수X가 주어진다.
 * 이때, A에서 X보다 작은 수를 모두 출력하는
 * 프로그램을 작성하시오.
 *
 * 입력
 * 첫째 줄에 N과 X가 주어진다. (1 <= N, X <= 10,000)
 * 둘째 줄에 수열 A를 이루는 정수 N개가 주어진다.
 * 주어지는 중수는 모두 1보다 크거나 같고,
 * 10,000보다 작거나 같은 정수이다.
 *
 * 출력
 * X보다 작은수를 입력받은 수서대로 공백으로 구분해 출력한다.
 * X보다 작은 수는 적어도 하나 존재한다.
 */
/*
#include <stdio.h>

int	main()
{
	int n;
	int x;
	int i;
	int flag;
	int *arr;

	scanf("%d", &n);
	scanf("%d", &x);

	i = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}

	i = 0;
	flag = 0;
	while (i < n)
	{
		if (arr[i] < x)
		{
			if (flag != 0)
				printf(" ");
			printf("%d", arr[i]);
			flag++;
		}
		i++;
	}
	return (0);
}
*/

//위와 같이 작성했더니 런타임에러가 뜸
//아마 배열의 참조가 잘못된 듯 하다

#include <stdio.h>

int	main()
{
	int n;
	int x;
	int i;
	int out;

	scanf("%d", &n);
	scanf("%d", &x);

	i = 0;

	while (i < n)
	{
		scanf("%d", &out);
		if (out < x)
			printf("%d ", out);	
		i++;
	}
	return (0);
}
