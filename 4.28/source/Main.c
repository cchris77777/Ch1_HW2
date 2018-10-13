//=========4.28
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n;
	double ms,hw,ph,ws,in;
	printf("managers is 1 , hourly workers is 2 , commission workers is 3 , peiceworker is 4\n");
	scanf_s("%d",&n);
	switch (n) {
	case 1:
		printf("Enter the weekly salary of manager: ");
		scanf_s("%lf",&ms);
		printf("The salary of manager is %.2lf\n",ms);
		break;
	case 2:
		printf("Enter hours of a week: ");
		scanf_s("%lf", &hw);
		printf("Enter the salary/per hour: ");
		scanf_s("%lf", &ph);
		if (hw <= 40)printf("The salary of hourly worker is %.2lf\n",hw*ph);
		else printf("The salary of hourly worker is %.2lf\n", 40*ph+(hw-40)*ph*1.5);
		break;
	case 3:
		printf("Enter the weekly sales: ");
		scanf_s("%lf", &ws);
		printf("The salary of commission worker is %.2lf\n",250+ws*0.057);
		break;
	case 4:
		printf("Enter the item's number: (1~4) : ");
		scanf_s("%lf", &in);
		printf("The salary of peice worker is %.2lf",400+in*50);
		break;
	}
	system("pause");
	return 0;
}