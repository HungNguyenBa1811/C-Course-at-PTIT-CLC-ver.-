#include<stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		long long n, digit;
		int check = 1;
		scanf("%lld", &n);
		digit = n % 10;
		while(n > 0){
			if(n % 10 > digit){
				check = 0;
				break;
			} else {
				digit = n % 10;
			}
			n /= 10;
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
