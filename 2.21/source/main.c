#include<stdio.h>
#include<stdlib.h>

int i;
int j;

int main(void)
{
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{ 
			if (i == 0 || i == 8 || j == 0 || j == 8 )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("  ***  \n *   * \n*     *\n*     *\n*     *\n*     *\n*     *\n *   * \n  ***  \n");
	int k = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i<3)
			{
				if (j >= 4 - k&&j <= 4 + k)printf("*");
				else printf(" ");
			}
			else
			{
				if (j == 4)printf("*");
				else printf(" ");
			}
		}
		printf("\n");
		k++;
	}
	printf("\n");
	int a = 4;
	int b = 4;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j == a || j == b)printf("*");
			else printf(" ");
		}
		if (i < 4){ a++; b--; }
		else{ a--; b++; }
		printf("\n");
	}
	system("pause");
		return 0;
}