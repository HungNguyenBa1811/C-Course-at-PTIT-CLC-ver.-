#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int n;
		long long max = -1e9, temp_max = 0;
		scanf("%d", &n);
		long long a[n];
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		// Kadane's Algorithm
		for(int i = 0; i < n; i++){
			temp_max += a[i];
			if(max < temp_max){
				max = temp_max;
			}
			if(temp_max < 0){
				temp_max = 0;
			}
		}
		printf("%lld\n", max);
	}
	return 0;
}
