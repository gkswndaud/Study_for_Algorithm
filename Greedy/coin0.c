#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int n;
int target;
int* arr;
int ans;

int token()
{
    int i;

    i = n - 1;
    ans = 0;
    while (target > 0)
    {
        if (target >= arr[i])
        {
            target -= arr[i];
            ans++;
        }
        else
            i--;
    }
    return (ans);
}


int main()
{
    int i;

    scanf("%d %d", &n, &target);

    arr = (int*)malloc(sizeof(int) * n);
    
    i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    printf("%d\n", token());

    return (0);
}
