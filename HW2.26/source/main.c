#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,M,m = 0;
	printf("input 2 numbers:");
	scanf_s("%d %d", &a, &b);
	//printf("%d\n",a);
	//printf("%d\n",b);
	//printf("%d\n",c);
	if (a % b == 0) c = 1; 
	else  c = 0;
	if(c==1) printf("%d is a multiple of %d\n", a, b);
	else    printf("%d is not a multiple of %d\n", a, b);
	system("pause");
	return 0;
}