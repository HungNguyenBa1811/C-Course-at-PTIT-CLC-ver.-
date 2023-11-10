#include <stdio.h>
#include <math.h>

int main(){
	int n, sum, min_sum = 1e9, cur;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < n; j++){
			sum += abs(a[i] - a[j]);
		}
		if(min_sum > sum){
			cur = a[i];
			min_sum = sum;
		}
	}
	printf("%d %d", min_sum, cur);
	return 0;
}
