#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		long long n, temp, reversed = 0;
		int check = 1, sum = 0;
		scanf("%lld", &n);
		temp = n;
		while(temp != 0){
			reversed *= 10;
			reversed += temp % 10;
			sum += temp % 10;
			temp /= 10;
		}
		if(n != reversed) check = 0;
		while(n > 0){
			temp = n % 10;
			if(temp % 2 == 0){
				check = 0;
				break;
			}
			n /= 10;
		}
		if(sum % 2 == 0) check = 0;
		if(check == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}	
