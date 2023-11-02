#include <stdio.h>
#include <math.h>

int main(){
    int n, cases;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &n);
		int first, last = n % 10;
		for(int i = 1; i <= 9; i++){
	        if(n / (int) pow(10, i) != 0){
	            first = num / (int) pow(10, i);
	            if(first == last){
	                printf("YES\n");
	            } else {
	                printf("NO\n");
	            }
	        	break;
	    	}
		}
    }
    return 0;
}
