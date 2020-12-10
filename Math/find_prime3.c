#include <stdio.h>
#define SIZE 51

void main()
{
	int prime_number[SIZE];
	for (int i = 0; i < SIZE; i++)
		prime_number[i] = i;			// 각 인덱스 값은 본인 숫자

	for (int i = 2; i * i <= SIZE; i++)
	{
		if (prime_number[i] == 0)		// 이미 지워져있으면 수행하지 않음
			continue;

		for (int j = i * i;j <= SIZE; j += i)
			prime_number[j] = 0;	// 배수에 있는 값은 0으로 지워줌
	}

	for (int i = 0; i < SIZE; ++i)		// 지워지지 않은 숫자만 출력
		if (prime_number[i] != 0)
			printf("%d ", prime_number[i]);
}
