#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("a=%d,b=%d,c=%d", a, b, c);

    return 0;
}