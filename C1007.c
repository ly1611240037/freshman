#define _CRT_SECURE_NO_WARNINGS
//编写程序，输入圆的半径，输出圆的面积和周长。
//圆的半径，实型数据。
//求圆的面积和周长
#include<stdio.h>
int main()
{
	double c = 0;
	double r = 0;
	double s = 0;
	scanf("%lf", &r);
	s = r * r * 3.14;
	c = r * 6.28;
	printf("%lf\n%lf", s, c);
	return 0;
}
//lsa