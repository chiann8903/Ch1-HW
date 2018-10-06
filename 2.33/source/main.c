#include<stdio.h>
#include<stdlib.h>
main(){
	float d, g, a, p, t,c;
	printf("input total miles driven per day:");
	scanf_s("%f", &d);
	printf("input cost per gallon of gasoline:");
	scanf_s("%f", &g);
	printf("input average miles per gallon:");
	scanf_s("%f", &a);
	printf("input parking fees per day:");
	scanf_s("%f", &p);
	printf("input tolls per day:");
	scanf_s("%f", &t);
	c = d / a*g + p + t;
	printf("your total cost is %.1f\n", c);
	system("pause");
}