#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX 10

int front = 0;
int rear = 0;
int queue[MAX]; //�� ũ��� 10������ �ִ�� 9���� �����͸� �޾���

int IsEmpty(void)
{
    if (front == rear)//front�� rear�� ������ ť�� ����ִ� ���� 
        return 1;
    else
        return 0;
}
int IsFull(void) {
    int tmp;
    tmp = (rear + 1) % MAX; //���� ť���� rear+1�� MAX�� ���� ����������
    if (tmp == front)//front�� ������ ť�� ������ �ִ� ���� 
        return 1;
    else
        return 0;
}
void enqueue(int value) 
{
    if (IsFull())
        printf("Queue is Full.\n");
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = value;
    }

}
int dequeue() 
{
    if (IsEmpty())
        printf("Queue is Empty.\n");
    else
    {
        front = (front + 1) % MAX;
        return queue[front];
    }
}

int	main()
{
    int i;

    i = 0;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    while (i < 10)
    {
        printf("(%d)\n", queue[i]);
        i++;
    }
    
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());

    return 0;
}