#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int chess[15];
int check_line[16];
int count;
int n;

int ft_abs(int a)
{
    if (a < 0)
        return (a * -1);
    else
        return (a);
}

int is_set(int depth, int offset)
{
    int i;

    i = 0;
    while (i < depth)
    {
        if(ft_abs(chess[i] - offset) == 
            ft_abs(i - depth))
            return (0);
        i++;
    }
    return (1);
}

void    set_queen(int depth, int offset)
{
    if (depth == n)
    {
        count++;
        return ;
    }
    offset = 1;
    while (offset < n + 1)
    {
        if ((!check_line[offset]) && is_set(depth, offset))
        {
            check_line[offset] = 1;
            chess[depth] = offset;
            set_queen(depth + 1, offset);
            check_line[offset] = 0;
        }
        offset++;
    }
}


int main(void)
{
    scanf("%d", &n);
    count = 0;

    set_queen(0, 1);

    printf("%d", count);
    return (0);
}
