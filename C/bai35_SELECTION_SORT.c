#include <stdio.h>

int main(){
	int n, min_idx, temp, step = 0;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){
	    min_idx = i;
	    for(int j = i + 1; j < n; j++){
	        if(a[j] < a[min_idx]){
	            min_idx = j;
	        }
	    }
	    step++;
    	temp = a[min_idx];
    	a[min_idx] = a[i];
    	a[i] = temp;
    	printf("Step %d:", step);
        for(int k = 0; k < n; k++){
        	printf(" %d", a[k]);
        }
        printf("\n");
	}
	return 0;
}
