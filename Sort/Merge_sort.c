#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
# define MAX_SIZE 8
int sorted[MAX_SIZE]; // �߰����� ������ �ʿ�

// i: ���ĵ� ���� ����Ʈ�� ���� �ε���
// j: ���ĵ� ������ ����Ʈ�� ���� �ε���
// k: ���ĵ� ����Ʈ�� ���� �ε���
/* 2���� ������ �迭 list[left...mid]�� list[mid+1...right]�� �պ� ���� */
/* (������ ���ڵ��� ���ĵǴ� ����) */
void merge(int list[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    /* ���� ���ĵ� list�� �պ� */
    while (i <= mid && j <= right) {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    // ���� �ִ� ������ �ϰ� ����
    if (i > mid) {
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    // ���� �ִ� ������ �ϰ� ����
    else {
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    // �迭 sorted[](�ӽ� �迭)�� ����Ʈ�� �迭 list[]�� �纹��
    for (l = left; l <= right; l++) {
        list[l] = sorted[l];
    }
}

// �պ� ����
void merge_sort(int list[], int left, int right) {
    int mid;

    if (left < right) {
        mid = (left + right) / 2; // �߰� ��ġ�� ����Ͽ� ����Ʈ�� �յ� ���� -����(Divide)
            merge_sort(list, left, mid); // ���� �κ� ����Ʈ ���� -����(Conquer)
        merge_sort(list, mid + 1, right); // ���� �κ� ����Ʈ ���� -����(Conquer)
        merge(list, left, mid, right); // ���ĵ� 2���� �κ� �迭�� �պ��ϴ� ���� -����(Combine)
    }
}

void main() {
    int i;
    int n = MAX_SIZE;
    int list[8] = { 21, 10, 12, 20, 25, 13, 15, 22 };

    // �պ� ���� ����(left: �迭�� ���� = 0, right: �迭�� �� = 7)
    merge_sort(list, 0, n - 1);

    // ���� ��� ���
    for (i = 0; i < n; i++) {
        printf("%d\n", list[i]);
    }
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