#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,M,m = 0;
	printf("input 1 number:");
	scanf_s("%d", &a);
	//printf("%d\n",a);
	//printf("%d\n",b);
	(b=(a % 2 == 0 )?1:0);
	if (b == 1) printf("%d is a even\n",a);
	else if (b == 0) printf("%d is a odd\n",a);
	system("pause");
	return 0;
}