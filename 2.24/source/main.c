#include<stdio.h>
#include<stdlib.h>
main(){
	int a;
	printf("input a number:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("%d is an even",a);
	else
		printf("%d is an odd",a);
	printf("\n");
	system("pause");
}