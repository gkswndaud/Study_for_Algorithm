#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

long long pow_mod(long long a, long long b, long long mod)
{
	long long ans;

	if (b == 1) //base condition�� ���� �����ϰ�,
		return a % mod;
	ans = pow_mod(a, b / 2, mod);// int���� 2�� �����ָ鼭 ũ�⸦ �ٿ�����
	ans = ans * ans % mod; //������ 1�� ������ �������� ���ϸ鼭 �������� ������
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