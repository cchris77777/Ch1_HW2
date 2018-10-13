//====4.16
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	//================(A)
	printf("(A)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j <= i)printf("%s","*");
		}
		printf("\n");
	}
	//================(B)
	printf("(B)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j >= i)printf("%s", "*");
		}
		printf("\n");
	}
	//================(C)
	printf("(C)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j < i)printf("%s", " ");
			else printf("%s","*");
		}
		printf("\n");
	}
	//================(D)
	printf("(D)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 10; j >0; j--) {
			if (j >i+1)printf("%s", " ");
			else printf("%s", "*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}