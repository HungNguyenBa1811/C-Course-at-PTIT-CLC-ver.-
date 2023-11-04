#include <stdio.h>

int main(){
	int n, temp = 0, count = 0, check;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n ; i++){
	    check = 0;
	    for(int j = i + 1; j < n; j++){
    	    if(a[i] > a[j]){
    	        temp = a[i];
    	        a[i] = a[j];
    	        a[j] = temp;
    	        check = 1;
    	    }
	    }
	    if(check){
            count++;
            printf("Step %d: ", count);
            for(int k = 0; k < n; k++){
                printf("%d ", a[k]);
            }
            printf("\n");
	    }
	}
	return 0;
}
