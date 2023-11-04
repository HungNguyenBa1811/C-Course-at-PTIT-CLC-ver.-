#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
    int a[n][n];
    int count = 1;
    int row_start = 0, row_end = n - 1;
    int col_start = 0, col_end = n - 1;
    while(count <= n * n){
        // top row
        for (int i = col_start; i <= col_end; i++) {
            a[row_start][i] = count++;
        }
        row_start++;
        // right column
        for (int i = row_start; i <= row_end; i++) {
            a[i][col_end] = count++;
        }
        col_end--;
        // bottom row
        for (int i = col_end; i >= col_start; i--) {
            a[row_end][i] = count++;
        }
        row_end--;
        // left column
        for (int i = row_end; i >= row_start; i--) {
            a[i][col_start] = count++;
        }
        col_start++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
	}
    return 0;
}
