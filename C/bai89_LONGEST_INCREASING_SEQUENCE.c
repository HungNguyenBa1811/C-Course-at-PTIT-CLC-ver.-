#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	for(int test = 1; test <= cases; test++){
		int n;
		scanf("%d", &n);
		int a[n], b[105] = {1}, pos;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int count = 1, max_count = -1;
		for(int i = 1; i < n; i++){
			if(a[i - 1] < a[i]){
				count++;
				if(count >= max_count){
					max_count = count;
				}
				
			} else {
				count = 1;
			}
			b[i] = count;
		}
		printf("Test %d:\n%d\n", test, max_count);
		for(int i = 0; i < n; i++){
			if(b[i] == max_count){
				for(int j = i - max_count + 1; j <= i; j++){
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
