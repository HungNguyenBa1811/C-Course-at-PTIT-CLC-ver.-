#include <stdio.h>
#include <math.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int a, b, check, temp, reversed, count = 0;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++){
			check = 1;
			for(int j = 2; j <= sqrt(i); j++){
				if(i % j == 0){
					check = 0;
					break;
				}
			}
			if(check){
				temp = i;
				reversed = 0;
				while(temp != 0){
					reversed *= 10;
					reversed += temp % 10;
					temp /= 10;
				}
				if(i == reversed){
					count++;
					if(count % 10 == 1 && count != 0) printf("\n");
					printf("%d ", i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
