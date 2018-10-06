#include<stdio.h>
#include<stdlib.h>
main(){
	int a, b, c;
	printf("input 3 numbers:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b&&a > c){
		printf("the biggest number is %d\nthe smallest number is ", a);
		if (b > c)
			printf("%d", c);
		else
			printf("%d", b);
	}
	if (b > a&&b > c){
		printf("the biggest number is %d\nthe smallest number is ", b);
		if (a > c)
			printf("%d", c);
		else
			printf("%d", a);
	}
	if (c > a&&c > b){
		printf("the biggest number is %d\nthe smallest number is ", c);
		if (a > b)
			printf("%d", b);
		else
			printf("%d", a);
	}
	printf("\n");
	system("pause");
}