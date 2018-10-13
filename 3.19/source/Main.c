//====3.19
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float lp,ir,d;
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &lp);
	printf("Enter interest rate : ");
	scanf_s("%f", &ir);
	printf("Enter term of the loan in days : ");
	scanf_s("%f", &d);
	if (lp==-1)printf("End\n");
	else printf("The interest charge is $%.2f\n",d/365*ir*lp);
	system("pause");
	return 0;
}