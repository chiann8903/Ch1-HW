#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float h, w,bmi;
	printf("input your height(m):");
	scanf_s("%f", &h);
	printf("input your weight(kg):");
	scanf_s("%f", &w);
	bmi = w / (pow(h, 2));
	printf("your BMI is %.1f\n", bmi);
	if (bmi <= 18.5)
		printf("you are underweight.\n");
	else if (bmi > 18.5&&bmi <= 24.9)
		printf("you are normal.\n");
	else if (bmi > 24.9&&bmi <= 29.9)
		printf("you are overweight.\n");
	else
		printf("you are obses.\n");
	system("pause");
}