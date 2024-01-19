#include <stdio.h>

int main(){
	int n, cases;
	scanf("%d", &cases);
	while(cases--){
		scanf("%d", &n);
        long long ans = 0, a = 1, b = 1;
        if(n == 1 || n == 2){
            printf("1\n");
        } else {
            for(int i = 0; i < n - 2; i++){
                ans = a + b;
                b = a;
                a = ans;
            }
            printf("%lld\n", ans);
        }
	}
	return 0;
}
