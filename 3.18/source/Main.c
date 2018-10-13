//====3.18
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float n;
	printf("Enter sales in dollars (-1 to end): ");
	scanf_s("%f",&n);
	if (n == -1)printf("End\n");
	else printf("Salary is: %.2f\n",200+n*0.09);
	system("pause");
	return 0;
}