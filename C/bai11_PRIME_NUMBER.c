#include <stdio.h>

int main(){
    int n, cases;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &n);
        int check = 1;
		if(n == 2 || n == 3){
			printf("YES\n");
			continue;
		}
		if(n % 2 == 0 || n % 3 == 0 || n < 2){
			printf("NO\n")
			continue;
		}
		for(int i = 5; i * i <= n; i += 6){
			if(n % i == 0 || n % (i + 2) == 0){
				printf("NO\n");
				check = 0;
				break;
			}
		}
        if(check) printf("YES\n");
    }
    return 0;
}
