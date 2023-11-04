#include <stdio.h>

int main(){
    int n, m, col_1, col_2, temp;
    scanf("%d %d", &n, &m);
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
        	scanf("%d", &a[i][j]);
    	}
    }
	scanf("%d %d", &col_1, &col_2);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
        	temp = j;
        	if(temp == col_1) temp = col_2;
        	else if(temp == col_2) temp = col_1;
        	printf("%d ", a[i][temp]);
    	}
    	printf("\n");
    }
    return 0;
}
