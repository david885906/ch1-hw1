#include<stdio.h>
#include<stdlib.h>
int num;
int main(void)
{
	printf("�п�J�@�ӼƦr:");
	scanf_s("%d",&num);
	if (num % 2 == 1) printf("odd");
	else printf("even");
	system("pause");
	return 0;
}