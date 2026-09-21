#include<stdio.h>
#include<stdlib.h>
int main()
{
	for(int i=0;i<5;i++)
	{
		printf("	");
		for (int k = 0; k <=4-i ; k++)		printf(" ");
		for (int j = 0; j <= (i*2); j++)	printf("*");
		printf("\n");
	}
	//printf("\n");
	system("pause");
	return 0;
}