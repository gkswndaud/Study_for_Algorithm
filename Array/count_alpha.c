#include <stdio.h>

int main(void) //O(n)의 시간복잡도를 가지는 배열에 저장하는 방식
{
	int i;
	char str[100];
	int alpha[26];

	i = 0;
	while (i < 26)
	{
		alpha[i] = 0;
		i++;
	}

	scanf("%s", &str);

	i = 0;
	while (str[i])
	{
		alpha[str[i] - 'a']++;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		printf("%d", alpha[i]);
		printf(" ");
		i++;
	}
	return (0);
}