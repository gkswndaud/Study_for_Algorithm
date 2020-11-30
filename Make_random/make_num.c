#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    while (1)
    {
        Sleep(1000);
        printf("%d\n", (rand() % 100) + 1);
        if (_kbhit()) // 특정키가 눌리면...
            if( _getch() == 'q') // 눌린키가 q이면 break;
                break;
    }
    return (0);
}
