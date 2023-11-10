#include <stdio.h>

int nt(int n){
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0 || n < 2) return 0;
	for(int i1 = 5; i1 * i1 <= n; i1 += 6){
		if(n % i == 0 || n % (i + 2) == 0) return 0;
	}
	return 1;
}

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int a, b, count = 0, temp, check;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++){
			temp = i;
			check = 1;
			while(temp > 0){
				if(nt(temp % 10) == 0){
					check = 0;
					break;
				}
				temp /= 10;
			}
			if(nt(i) == 1 && check == 1) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
