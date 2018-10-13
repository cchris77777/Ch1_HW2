//====3.33
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n, m;
	printf("input length and breadth :");
	scanf_s("%d%d",&n,&m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == m -1)printf("+");
			else printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}