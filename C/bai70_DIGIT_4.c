#include <stdio.h>
#include <math.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int n, temp, reversed;
		int check, sum;
		scanf("%d", &n);
		for(int i = pow(10, n - 1); i < pow(10, n) - 1; i++){
			sum = 0;
			check = 1;
			temp = i;
			reversed = 0;
			while(temp != 0){
				if(temp % 10 == 4){
					check = 0;
					break;
				}
				reversed *= 10;
				reversed += temp % 10;
				sum += temp % 10;
				temp /= 10;
			}
			if(check == 0) continue;
			if(i != reversed) check = 0;
			else if(sum % 10 != 0) check = 0;
			if(check) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}	
