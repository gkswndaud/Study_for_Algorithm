#include <stdio.h>

int main(void) //O(n)�� �ð����⵵�� ������ �迭�� �����ϴ� ���
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