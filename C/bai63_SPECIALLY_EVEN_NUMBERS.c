#include <math.h>

int main() {
	int cases;
	scanf("%d", &cases);
	while(cases--){
		long long n;
		int check = 1, temp;
		scanf("%lld", &n);
		while(n != 0){
			temp = n % 10;
			if(temp % 2 != 0){
				check = 0;
				break;
			}
			n /= 10;
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
