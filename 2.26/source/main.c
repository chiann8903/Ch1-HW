#include<stdio.h>
#include<stdlib.h>
main(){
	int a,b;
	printf("input 2 numbers:");
	scanf_s("%d%d", &a, &b);
	if (a%b == 0)
		printf("%d is a multiple of %d", a, b);
	else
		printf("%d is not a multiple of %d", a, b);
	printf("\n");
	system("pause");
}