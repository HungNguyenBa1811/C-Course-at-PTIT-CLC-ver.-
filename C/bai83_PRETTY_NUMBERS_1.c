#include <stdio.h>

int nt(int n){
	if(n == 2 || n == 3){
		return 1;
	}
	if(n % 2 == 0 || n % 3 == 0 || n < 2){
		return 0;
	}
	for(int i = 5; i * i <= n; i += 6){
		if(n % i == 0 || n % (i + 2) == 0){
			return 0;
		}
	}
	return 1;
}

int fibo_check(int num){
	int a = 0, b = 1, temp;
    if (num == 0){
        return 1;
    }
    while(b < num){
        temp = a;
        a = b;
        b += temp;
    }
    if(b == num){
        return 1;
    } else {
        return 0;
    }
}

int main(){
	int a, b, start, end, sum, temp;
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
		if(nt(i) && fibo_check(sum)){
			printf("%d ", i);
		}
	}
}
