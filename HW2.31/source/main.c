#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,M,m = 0;
	printf(" number	square	cube\n");
	for (int i = 1; i <= 10; i++)
	{
		a = i;
		b = a * a; c = a * a * a;
		printf(" %d	%d	%d\n", a, b, c);
	}
	system("pause");
	return 0;
}