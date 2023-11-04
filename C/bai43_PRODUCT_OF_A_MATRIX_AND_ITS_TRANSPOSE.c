#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	for(int test = 1; test <= cases; test++){
		int n, m, temp;
		scanf("%d %d", &n, &m);
		int a[n][m], b[m][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				b[i][j] = a[j][i];
			}
		}
		printf("Test %d:\n", test);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				temp = 0;
				for(int k = 0; k < m; k++){
					temp += a[i][k] * b[k][j];
				}
				printf("%d ", temp);
			}
			printf("\n");
		}
	}
	return 0;
}
