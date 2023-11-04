#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int n_cpy = n, digit_count = 0;
	while(n_cpy > 0){
		digit_count++;
		n_cpy /= 10;
	}
	int first = n / pow(10, digit_count - 1);
	int last = n % 10;
	n -= (last - first) + (first - last) * pow(10, digit_count - 1);
	printf("%d", n);
	return 0;
}
