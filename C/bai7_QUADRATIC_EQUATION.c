#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double delta = b * b - 4 * a * c;
	if(delta == 0){
	    printf("%.2f", -b / (2 * a));
	} else if (delta < 0){
	    printf("NO");
	} else {
	    double x1 = (- b + sqrt(delta)) / (2 * a);
	    double x2 = (- b - sqrt(delta)) / (2 * a);
	    if(x1 < x2){
	    	double temp = x1;
	    	x1 = x2;
	    	x2 = temp;
		}
	    printf("%.2lf %.2lf", x1, x2);
	}
	return 0;
}
