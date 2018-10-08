#include<stdio.h>
#include<stdlib.h>
int first, second;
int main(void)
{
	printf("叫块ㄢ计:");
	scanf_s("%d%d",&first,&second);
	if (first % second == 0)printf("材1计材2计计");
	else printf("材1计ぃ材2计计");
	system("pause");
	return 0;
}