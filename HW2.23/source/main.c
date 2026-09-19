#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,M,m = 0;
	printf("input 3 numbers:");
	scanf_s("%d %d %d", &a, &b, &c);
	//printf("%d\n",a);
	//printf("%d\n",b);
	//printf("%d\n",c);
	M = a; m = a;
	if (b > M) M=b;if(c > M) M=c;
	if (b < m) m=b;if(c < m) m=c;
	printf("largest = %d,smallest = %d",M,m);
	return 0;
}