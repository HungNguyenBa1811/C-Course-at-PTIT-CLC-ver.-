#include <stdio.h>

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

int contain_6(int n){
	while(n != 0){
		if(n % 10 == 6){
			return 1;
		}
		n /= 10;
	}
	return 0;
}

int end_8(int n){
	if(n % 10 == 8){
		return 1;
	}
	return 0;
}

int main(){
	int a, b, start, end, sum, temp, count = 0;
	scanf("%d %d", &a, &b);
	start = (a < b) ? a : b;
	end = (a > b) ? a : b;
	for(int i = start; i <= end; i++){
		sum = 0;
		temp = i;
		while(temp > 0){
			sum += temp % 10;
			temp /= 10;
		}
		if(check_palindromic(i) && contain_6(i) && end_8(sum)){
			printf("%d ", i);
		}
	}
}
