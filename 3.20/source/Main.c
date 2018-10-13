//====3.20
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float n,m,t;
	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &n);
	printf("Enter hourly rate of the worker ($00.00): ");
	scanf_s("%f", &m);
	if (n == -1)printf("End\n");
	else {
		if (n <= 40)printf("Salary is $%.2f\n",n*m);
		else printf("Salary is $%.2f\n",40*m+(n-40)*1.5*m);
	}
	system("pause");
	return 0;
}