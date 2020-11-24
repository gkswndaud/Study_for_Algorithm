#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

long long pow_mod(long long a, long long b, long long mod)
{
	long long ans;

	if (b == 1) //base condition의 값을 기준하고,
		return a % mod;
	ans = pow_mod(a, b / 2, mod);// int값을 2로 나눠주면서 크기를 줄여나감
	ans = ans * ans % mod; //구해진 1의 값부터 역순으로 곱하면서 나머지를 구해줌
						   // A*B % M = (A%M) * (B%M) % M && a * a == a ^ 2
	if (b % 2 == 0)        
		return (ans);
	return (ans * a % mod);
}

int main()
{
	long long a;
	long long b;
	long long c;
	long long ans;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	ans = pow_mod(a, b, c);
	printf("%d", ans);
	
	return 0;
}