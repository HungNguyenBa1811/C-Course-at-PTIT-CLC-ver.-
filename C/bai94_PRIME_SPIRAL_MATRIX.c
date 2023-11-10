#include <stdio.h>

int nt(int m){
	if(m == 2 || m == 3){
		return 1;
	}
	if(m % 2 == 0 || m % 3 == 0 || m < 2){
		return 0;
	}
	for(int i1 = 5; i1 * i1 <= m; i1 += 6){
		if(m % i1 == 0 || m % (i1 + 2) == 0){
			return 0;
		}
	}
	return 1;
}

int generate_next_nt(int n){
	n += 2;
	while(!nt(n)){
		n += 2;
	}
	return n;
}

int main(){
	int cases;
	scanf("%d", &cases);
	for(int test = 1; test <= cases; test++){
		int n;
		scanf("%d", &n);
		
	    int a[n][n];
	    int count = 1;
	    int count_nt = 2;
	    int row_start = 0, row_end = n - 1;
	    int col_start = 0, col_end = n - 1;
		
	    while(count <= n * n){
	        // top row
	        for (int i = col_start; i <= col_end; i++) {
	            a[row_start][i] = count_nt;
	            count++;
	            if(count_nt != 2){
	            	count_nt = generate_next_nt(count_nt);
				} else {
					count_nt++;
				}
	        }
	        row_start++;
	
	        // right column
	        for (int i = row_start; i <= row_end; i++) {
	            a[i][col_end] = count_nt;
				count++;
	            count_nt = generate_next_nt(count_nt);
	        }
	        col_end--;
	
	        // bottom row
	        for (int i = col_end; i >= col_start; i--) {
	            a[row_end][i] = count_nt;
				count++;
	            count_nt = generate_next_nt(count_nt);
	        }
	        row_end--;
	
	        // left column
	        for (int i = row_end; i >= row_start; i--) {
	            a[i][col_start] = count_nt;
				count++;
	            count_nt = generate_next_nt(count_nt);
	        }
	        col_start++;
	    }
	    printf("Test %d:\n", test);
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            printf("%d ", a[i][j]);
	        }
	        printf("\n");
	    }
	}
	
    return 0;
}
