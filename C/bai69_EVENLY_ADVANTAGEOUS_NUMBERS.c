#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		long long n, temp;
		int odd = 0, even = 0;
		scanf("%lld", &n);
		if(n % 2 != 0){
			printf("NO\n");
			continue;
		}
		while(n != 0){
			temp = n % 10;
			if(temp % 2 == 0) even++;
			else odd++;
			n /= 10;
		}
		if(even > odd) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}	
