#include <stdio.h>

int main(){
	int n, cases;
	scanf("%d", &cases);
	while(cases--){
		scanf("%d", &n);
		int flag = 0;
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d ", &a[i]);
		}
		for(int j = 0; j <= n / 2; j++){
			if(a[j] != a[n - 1 - j]){
				flag = 1;
				break;
			}
		}
		if(flag) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
