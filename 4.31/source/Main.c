//=====4.31
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b;
	a = 4;
	b = 4;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (j >= a && j <= b)printf("*");
			else printf(" ");
		}
		if (i < 4) { a--; b++; }
		else { a++; b--; }
		printf("\n");
	}
	system("pause");
	return 0;
}