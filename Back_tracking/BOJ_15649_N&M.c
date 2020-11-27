#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
int n;
int m;
int arr[8];
bool chk[8];
int flag;

void get_num(int depth, int num)
{
    int i;

    if (depth == m)
    {
        i = 0;
        while(i < m)
        {
            printf("%d", arr[i]);
            i++;
            printf(" ");
        }
        printf("\n");
        return ;
    }
    num = 1;
    while (num <= n)
    {
        if (!chk[num])
        {
            arr[depth] = num;
            chk[num] = 1;
            get_num(depth + 1, num);
            chk[num] = 0;
        }
        num++;
    }
}

int main(void)
{
    
    scanf("%d %d", &n, &m);
    get_num(0, 1);
    
    return (0);
}
/*

#include <stdio.h>
#include <conio.h>

#define pause getch()


#define is_stack_empty()  (top < 0)
#define MAX 100



int top; // ������ ���
int stack[MAX];  // �迭 ���



void init_stack()
{
    top = -1;  // ������ �����
}



int push(int val)
{
    if (top >= MAX - 1)  // ������ �� ��
    {
        printf("\nOverflow.");
        return -1;
    }
    stack[++top] = val;
    return val;
}



int pop()
{
    if (top < 0)  // ������ ��
    {
        printf("\nUnderflow.");
        return -1;
    }
    return stack[top--];
}



void move(int a, int c, int n)
{
    printf("%d�� %c���� %c�� �ű�ϴ�\n", n, 'A' - 1 + a, 'A' - 1 + c);
}



void nr_hanoi(int n, int a, int b, int c)
{
    int done = 0;
    init_stack();   // �����ʱ�ȭ top = -1
    while (!done)
    {
        while (n > 1)
        {
            push(c);  // ���� ����
            push(b);
            push(a);
            push(n);
            n--;
            push(c);  // c�� b�� ��ȯ�� ���� �ӽ÷� ����
            c = b;
            b = pop();
        }


        move(a, c, n);  // ���� ó��
        if (!is_stack_empty()) // (top < 0) -> !(top < 0)
        {
            n = pop();
            a = pop();
            b = pop();
            c = pop();
            move(a, c, n);
            n--;
            push(a);  // a�� b�� ��ȯ�� ���� �ӽ÷� ����
            a = b;
            b = pop();
        }
        else
            done = 1;  // ������ ��� ��
    }
}


int main()
{
    int i = 0, cnt = 0;



    while (1) {
        printf("������ �� -> ");
        scanf("%d", &i);

        if (i <= 0) break;
        nr_hanoi(i, 1, 2, 3);
        printf("\n(���� : 0)  ");
    }



    return 0;
}*/
/*
int	stack1[20];
int stack2[20];
int stacl3[20];
int n;

void	Tower_of_Hanoi(int i)
{
	if(top(stack1) == n)
		push(stack2)
	
	
}

int main()
{
	int idx;

	scanf("%d", &n);
	idx = 1;
	while (idx <= n)
	{
		stack1[idx - 1] = idx;
		idx++;
	}
	idx = 1;
	Tower_of_Hanoi(idx);

	return 0;
}
*/