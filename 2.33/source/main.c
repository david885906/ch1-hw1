#include<stdio.h>
#include<stdlib.h>
	int km, money, av, park, pass, total;
int main(void)
{
	
	printf("�@��Ѫ��`���{��:"); scanf_s("%d", &km);
	printf("�T�o�@���ɦh�ֿ�:"); scanf_s("%d", &money);
	printf("�����@���ɯ��p�h�֤���:"); scanf_s("%d", &av);
	printf("�@�Ѫ������O:"); scanf_s("%d", &park);
	printf("�@�Ѫ��q��O(�L���O):"); scanf_s("%d", &pass);
	total = km / av*money + park + pass;
		printf("�@�Ѥj����O:%d",total);
	system("pause");
	return 0;
}