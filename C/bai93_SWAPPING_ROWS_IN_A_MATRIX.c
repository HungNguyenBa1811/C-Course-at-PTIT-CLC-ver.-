#include <stdio.h>

int main(){
	int m, n, row_1, row_2, temp;
	scanf("%d %d", &m, &n);
	int a[m + 1][n + 1];
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &row_1, &row_2);
	for(int i = 1; i <= n; i++){
		temp = a[row_1][i];
		a[row_1][i] = a[row_2][i];
		a[row_2][i] = temp;
	}
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
