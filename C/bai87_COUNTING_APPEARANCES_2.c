#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	for(int test = 1; test <= cases; test++){
		int n;
		scanf("%d", &n);
		int a[n], b[100005] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n", test);
		for(int i = 0; i < n; i++){
			if(b[a[i]] != 0){
				printf("%d appears %d times\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
	return 0;
}
