#include <stdio.h>

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
	if(a != 0){
	    printf("%.2f", - b / a);
	} else if (a == 0 && b != 0){
	    printf("No solution");
	} else if (a == 0 && b == 0){
	    printf("Infinite solutions");
	}
	return 0;
}
