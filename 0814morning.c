#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int x = 10;
    int y = 10;
    int s = 10;
    scanf("%d %d", &x, &y);
    if (x == y)
    {
        s = 0;
    }
    else if (x == 100 && y < 100)
    {
        s = 50 * (100-y);
    }
    else if (y == 100 && x < 100)
    {
        s = 50* (100 - x) ;
    }
    else if (x > y)
    {
        s = (10000 - x * y - (100 - x) * (100 - y) - 2 * (100 - x) * y) / 2;
    }
    else
    {
        s = (10000 - x * y - (100 - x) * (100 - y) - 2 * (100 - y) * x) / 2;
    }
    printf("%d", s);
    return 0;
}