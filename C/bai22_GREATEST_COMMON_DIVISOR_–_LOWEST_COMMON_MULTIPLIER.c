#include <stdio.h>

int gcd(int a, int b){
	while(a !=0 && b != 0){
		if(a >= b){
			a -= b;
		} else {
			b -= a;
		}
	}
	return a + b;
}

int main(){
    int a, b, ans;
    scanf("%d %d", &a, &b);
	ans = gcd(a, b);
	printf("%d\n%lld", ans, (long long) (a / ans) * b);
    return 0;
}
