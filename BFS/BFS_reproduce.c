#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int QUEUE[30];//ť!
int map[30][30];//������ �Ǵ� ��
int visit[30]; //������ �湮�� �ߴ��� ���� üũ�� �޸���
int	max;
int head = 0;
int tail = 0;

void	push(int num)
{
	QUEUE[tail++] = num;
}
int	pop()
{
		head++;
		return(QUEUE[head - 1]);
}

void	BFS(int offset)
{
	int i;

	visit[offset] = 1; //���� offset�� �湮�ߴٰ� ǥ��
	printf("%d���� ����\n", offset);
	push(offset); // ť�� push�� offset�� �����ϰ� ť�� tail�� ��������
	while (head < tail)// tail�� head�� ���ų� ������ ����Ż��
	{
		// ť�� head��ġ�� �ִ� �����͸� ������ �����ϰ� pop���� ���� ����� head�� ����
		offset = pop();
		i = 1;
		while (i <= max)
		{
			//���� offset�� ���� i�� ����Ǿ��ְ�, ���� i�� �湮���� ���� ������ ���
			if (map[offset][i] == 1 && !visit[i])
			{
				visit[i] = 1;
				printf("%d���� %d�� �̵�\n", offset, i);
				push(i); //ť�� i�� �����ϰ� tail�� 1������Ŵ
			}
			i++;
		}
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

	BFS(start); //BFS�� ����
	
	return 0;
}