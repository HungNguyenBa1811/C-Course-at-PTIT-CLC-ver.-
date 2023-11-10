#include <stdio.h>

int check_split(long long n){
	int check = 1;
	while(n > 0){
		long long temp = n % 10;
		if(temp != 0 && temp != 1 && temp != 8 && temp != 9){
			check = 0;
			break;
		}
		n /= 10;
	}
	return check;
}

long long split(long long digit){
	switch(digit){
		case 0:
		case 8:
		case 9:
			return 0;
		case 1:
			return 1;
	}
}

void tachChuSo(long long num) {
	long long digit, rev = 0, count = 0, ans = 0;
	while (num != 0) {
    	count++;
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
	
    while (count != 0) {
        digit = rev % 10;
        ans *= 10;
        ans += split(digit);
        rev /= 10;
        count--;
    }
    if(ans != 0) printf("%lld\n", ans);
    else printf("INVALID\n");
}

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		long long n;
		scanf("%lld", &n);
		if(!check_split(n)){
			printf("INVALID\n");
			continue;
		}
		tachChuSo(n);
	}
	return 0;
}

