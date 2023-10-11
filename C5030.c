#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x = 10;
    scanf("%d", &x);
    int count = 0;
    int fen5, fen2, fen1;

    for ( fen5 = x / 5;fen5 >= 1; fen5--) {
        for (fen2 = x / 2;fen2 >= 1 ; fen2--) {
            for (fen1 = x;fen1 >= 1;  fen1--) {
                if (fen5 * 5 + fen2 * 2 + fen1 == x) {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, fen5 + fen2 + fen1);
                    count++;
                }
            }

        }
    }

    printf("count = %d", count);

    return 0;
}