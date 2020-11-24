#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int map[30][30];//������ �Ǵ� ��
int visit[30]; //������ �湮�� �ߴ��� ���� üũ�� �޸���
int	max;

void	DFS(int offset)
{
	int i;

	visit[offset] = 1; //���� offset�� �湮�ߴٰ� ǥ��
	i = 1;
	while (i <= max)
	{
		//���� offset�� ���� i�� ����Ǿ��ְ�, ���� i�� �湮���� ���� ������ ���
		if (map[offset][i] == 1 && !visit[i])
		{
			printf("%d���� %d�� �̵�\n", offset, i);
			DFS(i); //���� i���� �ٽ� DFS�� �����Ѵ�.
		}
		i++;
	}
}

int main()
{
	int	start;	//���� ������ ��Ÿ���� ����
	int	v1;
	int v2;

	scanf("%d%d", &max, &start);

	while (1) //map������ v1v2 ¦��� ���� �ִ� �� �̸� 1
	{
		scanf("%d%d", &v1, &v2);
		if (v1 == -1 && v2 == -1)
			break;
		map[v1][v2] = 1; //v1�� v2�� ���������
		map[v2][v1] = 1;
	}

	DFS(start); //DFS�� ����
	
	return 0;
}