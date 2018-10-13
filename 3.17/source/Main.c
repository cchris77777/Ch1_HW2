#include<stdio.h>
#include<stdlib.h>
int main(void) {
	//==========input
	float an, bb, c, tc, cl;
	printf("Enter account number (-1 to end) : ");
	scanf_s("%f",&an);
	printf("Enter beginning balance : ");
	scanf_s("%f", &bb);
	printf("Enter total charges : ");
	scanf_s("%f", &c);
	printf("Enter total credits : ");
	scanf_s("%f", &tc);
	printf("Enter credit limit : ");
	scanf_s("%f", &cl);
	//=========output
	bb = bb + c - tc;
	printf("Account :      %.2f\n",an);
	printf("Credit limit : %.2f\n",cl);
	printf("Balance :      %.2f\n",bb);
	if (bb > cl)printf("Credit Limit Exceeded\n");
	system("pause");
	return 0;
}