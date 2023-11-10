#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int n, lead, check;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		lead = a[0];
		for(int i = 1; i < n; i++){
			if(lead > a[i]){
				check = 1;
				for(int j = i + 1; j < n; j++){
					if(lead <= a[j]){
						check = 0;
						break;
					}
				}
				if(check){
					printf("%d ", lead);
				}
			}
			lead = a[i];
		}
		printf("%d\n", a[n - 1]);
	}
	return 0;
}
