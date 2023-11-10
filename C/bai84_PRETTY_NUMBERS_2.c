#include <stdio.h>
#include <math.h>

int check_palindromic(int n){
	int temp = n, reversed = 0;
	while(n != 0){
		reversed *= 10;
		reversed += n % 10;
		n /= 10;
	}
	if(temp == reversed){
		return 1;
	}
	return 0;
}

int div_10(int num){
	if(num % 10 == 0){
		return 1;
	}
	return 0;
}

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int n, start, end, temp, sum, count = 0;
		scanf("%d", &n);
		start = pow(10, n - 1);
		end = pow(10, n);
		for(int i = start; i <= end; i++){
			sum = 0;
			temp = i;
			while(temp > 0){
				sum += temp % 10;
				temp /= 10;
			}
			if(check_palindromic(i) && div_10(sum)){
				count++;
			}
		}
		printf("%d\n", count);
	}
}
