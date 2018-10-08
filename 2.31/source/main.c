#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int i;
	printf("number      square      cube\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d             %d         %d\n", i, i*i , i*i*i);
	}
	system("pause");
	return 0;
}