#include <stdio.h>

int main(){
	int n, temp = 0, i = 0, count = 1, check;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){
	    check = 0;
	    for(int j = 0; j < n - i - 1 ; j++){
    	    if(a[j] > a[j + 1]){
    	        temp = a[j + 1];
    	        a[j + 1] = a[j];
    	        a[j] = temp;
    	        check = 1;
    	    }
	    }
	    if(check){
    	    printf("Step %d: ", count++);
        	for(int j = 0; j < n; j++){
        		printf("%d ", a[j]);
        	}
        	printf("\n");
	    }
	}
	return 0;
}
