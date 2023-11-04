#include <stdio.h>
#include <math.h>

int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int n, count, mul = 0;
        scanf("%d", &n);
        if(n % 2 != 0){
        	printf("0\n");
        	continue;
		}
		while (n % 2 == 0){
	        mul++;
	        n /= 2;
	    }
	    for(int i = 3; i <= sqrt(n); i += 2){
	    	count = 1;
	        while(n % i == 0){
	            count++;
	            n /= i;
	        }
	        mul *= count;
		}
		if(n > 2) mul *= 2;
		printf("%d\n", mul);
    }
    return 0;
}
