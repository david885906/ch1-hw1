#include<stdio.h>
#include<stdlib.h>

int a, b, c,max,min;
int main(void)
{
	printf("請輸入三個數:");
	scanf_s(" %d%d%d", &a, &b, &c);
	max = a;
	if (b > a) max = b;
	if (c > max) max = c;
	min = a;
	if (a > b) min = b;
	if (max > c) min = c;
	printf("largest=%d,smallest=%d ", max, min);
	system("pause");
		return 0;
}