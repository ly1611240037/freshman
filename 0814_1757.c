#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int start = 1111;
	int past = 111;
	int final = 111;
	int a = 111;//最终的分钟数
	scanf("%d %d", &start, &past);
	a = start / 100 * 60 + start % 100 + past;
	final = a % 60 + a / 60 * 100;
	if (final < 100)
	{
		printf("%03d", final);
	}
	else
	{
		printf("%d", final);
	}
	return 0;
}