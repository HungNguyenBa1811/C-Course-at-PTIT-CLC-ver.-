#include <stdio.h>

int main(){
	int n, m, p, temp;
	scanf("%d %d %d", &n, &m, &p);
	int a[n][m], b[m][p];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < p; j++){
			temp = 0;
			for(int k = 0; k < m; k++){
				temp += a[i][k] * b[k][j];
			}
			printf("%d ", temp);
		}
		printf("\n");
	}
	return 0;
}
