#include<stdio.h>
#include<stdlib.h>
int first, second;
int main(void)
{
	printf("�п�J��Ӽ�:");
	scanf_s("%d%d",&first,&second);
	if (first % second == 0)printf("��1�ӼƬ���2�Ӽƪ�����");
	else printf("��1�ӼƤ�����2�Ӽƪ�����");
	system("pause");
	return 0;
}