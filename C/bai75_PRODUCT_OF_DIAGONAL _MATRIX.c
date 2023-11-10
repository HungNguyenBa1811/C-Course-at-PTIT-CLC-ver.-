#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	for(int test = 1; test <= cases; test++){
		int n, count = 0, temp;
		scanf("%d", &n);
		int a[n][n], b[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j <= i){
					a[i][j] = j + 1;
				} else {
					a[i][j] = 0;
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				b[i][j] = a[j][i];
			}
		}
		printf("Test %d:\n", test);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				temp = 0;
				for(int k = 0; k < n; k++){
					temp += a[i][k] * b[k][j];
				}
				printf("%d ", temp);
			}
			printf("\n");
		}
	}
	return 0;
}

