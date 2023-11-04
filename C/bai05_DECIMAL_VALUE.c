#include <stdio.h>

int main(){
	int x, cases;
	scanf("%d", &cases);
	while(cases--){
	    scanf("%d", &x);
		printf("%.15f\n", (double) 1 / x);
	}
	return 0;
}
