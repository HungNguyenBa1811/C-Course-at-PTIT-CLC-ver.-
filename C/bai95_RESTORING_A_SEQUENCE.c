#include <stdio.h>

int main(){
	int n, pos = 1;
	scanf("%d", &n);
	int b[n + 1][n + 1], a[n + 1];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &b[i][j]);
		}
	}
	if(n == 2){
		printf("%d %d", b[1][2] / 2, b[1][2] / 2);
		return 0;
	}
	if(n == 3){
		printf("%d %d %d", (b[1][2] + b[1][3] - b[2][3]) / 2, (b[1][2] + b[2][3] - b[1][3]) / 2, (b[3][1] + b[3][2] - b[1][2]) / 2);
		return 0;
	}
	for(int i = 1; i <= n / 2; i++){
		a[i] = (b[i][n] + b[i][n - 1] - b[n][n - 1]) / 2;
		pos++;
	}
	for(int i = pos; i <= n; i++){
		a[i] = (b[i][1] + b[i][2] - b[1][2]) / 2;
	}
	for(int i = 1; i <= n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
