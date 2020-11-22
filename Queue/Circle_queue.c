#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX 10

int front = 0;
int rear = 0;
int queue[MAX]; //총 크기는 10이지만 최대는 9개의 데이터만 받아짐

int IsEmpty(void)
{
    if (front == rear)//front와 rear가 같으면 큐는 비어있는 상태 
        return 1;
    else
        return 0;
}
int IsFull(void) {
    int tmp;
    tmp = (rear + 1) % MAX; //원형 큐에서 rear+1을 MAX로 나눈 나머지값이
    if (tmp == front)//front와 같으면 큐는 가득차 있는 상태 
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