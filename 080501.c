//https://www.nowcoder.com/questionTerminal/61a0f16117484d219b59c62224b33b1c
//牛客网题目之一
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    scanf("%d", &x);
    if (x < 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("%d", y);
    return 0;
}