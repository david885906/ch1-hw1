#include<stdio.h>
#include<stdlib.h>
int num;
int main(void)
{
	printf("請輸入一個數字:");
	scanf_s("%d",&num);
	if (num % 2 == 1) printf("odd");
	else printf("even");
	system("pause");
	return 0;
}