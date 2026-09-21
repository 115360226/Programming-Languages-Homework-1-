#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("a) Total miles driven per day.\n");
	printf("b) Cost per gallon of gasoline.\n");
	printf("c) Average miles per gallon.\n");
	printf("d) Parking fees per day.\n");
	printf("e) Tolls per day.\n");
	float a, b, c, d, e, sum,fee = 0;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &c);
	scanf_s("%f", &d);
	scanf_s("%f", &e);
	//sum = a /c*b;
	fee = d + e + a /c * b;
	//printf("Total sum = %f\n", sum);
	printf("Total fee = %f\n", fee);
	system("pause");
	return 0;
}