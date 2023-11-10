#include <stdio.h>

int check_palindromic(int n){
	int temp = n, reversed = 0;
	while(n > 0){
		reversed *= 10;
		reversed += n % 10;
		n /= 10;
	}
	return reversed == temp;
}

int check_9(int n){
	while(n > 0){
		if(n % 10 == 9) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int n, count = 0;
	scanf("%d", &n);
	for(int i = 2; i < n; i++){
		if(check_palindromic(i) && check_9(i)){
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}
