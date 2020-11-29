#define _CRT_SECURE_NO_WARNINGS

# include <stdio.h>
# define MAX_SIZE 8
int sorted[MAX_SIZE]; // 추가적인 공간이 필요

// i: 정렬된 왼쪽 리스트에 대한 인덱스
// j: 정렬된 오른쪽 리스트에 대한 인덱스
// k: 정렬될 리스트에 대한 인덱스
/* 2개의 인접한 배열 list[left...mid]와 list[mid+1...right]의 합병 과정 */
/* (실제로 숫자들이 정렬되는 과정) */
void merge(int list[], int left, int mid, int right) {
    int i, j, k, l;
    i = left;
    j = mid + 1;
    k = left;

    /* 분할 정렬된 list의 합병 */
    while (i <= mid && j <= right) {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    // 남아 있는 값들을 일괄 복사
    if (i > mid) {
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    // 남아 있는 값들을 일괄 복사
    else {
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    // 배열 sorted[](임시 배열)의 리스트를 배열 list[]로 재복사
    for (l = left; l <= right; l++) {
        list[l] = sorted[l];
    }
}

// 합병 정렬
void merge_sort(int list[], int left, int right) {
    int mid;

    if (left < right) {
        mid = (left + right) / 2; // 중간 위치를 계산하여 리스트를 균등 분할 -분할(Divide)
            merge_sort(list, left, mid); // 앞쪽 부분 리스트 정렬 -정복(Conquer)
        merge_sort(list, mid + 1, right); // 뒤쪽 부분 리스트 정렬 -정복(Conquer)
        merge(list, left, mid, right); // 정렬된 2개의 부분 배열을 합병하는 과정 -결합(Combine)
    }
}

void main() {
    int i;
    int n = MAX_SIZE;
    int list[8] = { 21, 10, 12, 20, 25, 13, 15, 22 };

    // 합병 정렬 수행(left: 배열의 시작 = 0, right: 배열의 끝 = 7)
    merge_sort(list, 0, n - 1);

    // 정렬 결과 출력
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



int top; // 스택의 상단
int stack[MAX];  // 배열 사용



void init_stack()
{
    top = -1;  // 스택이 비워짐
}



int push(int val)
{
    if (top >= MAX - 1)  // 스택이 꽉 참
    {
        printf("\nOverflow.");
        return -1;
    }
    stack[++top] = val;
    return val;
}



int pop()
{
    if (top < 0)  // 스택이 빔
    {
        printf("\nUnderflow.");
        return -1;
    }
    return stack[top--];
}



void move(int a, int c, int n)
{
    printf("%d을 %c에서 %c로 옮깁니다\n", n, 'A' - 1 + a, 'A' - 1 + c);
}



void nr_hanoi(int n, int a, int b, int c)
{
    int done = 0;
    init_stack();   // 스택초기화 top = -1
    while (!done)
    {
        while (n > 1)
        {
            push(c);  // 인자 삽입
            push(b);
            push(a);
            push(n);
            n--;
            push(c);  // c와 b의 교환을 위해 임시로 저장
            c = b;
            b = pop();
        }


        move(a, c, n);  // 종료 처리
        if (!is_stack_empty()) // (top < 0) -> !(top < 0)
        {
            n = pop();
            a = pop();
            b = pop();
            c = pop();
            move(a, c, n);
            n--;
            push(a);  // a와 b의 교환을 위해 임시로 저장
            a = b;
            b = pop();
        }
        else
            done = 1;  // 스택이 비면 끝
    }
}


int main()
{
    int i = 0, cnt = 0;



    while (1) {
        printf("원반의 수 -> ");
        scanf("%d", &i);

        if (i <= 0) break;
        nr_hanoi(i, 1, 2, 3);
        printf("\n(종료 : 0)  ");
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