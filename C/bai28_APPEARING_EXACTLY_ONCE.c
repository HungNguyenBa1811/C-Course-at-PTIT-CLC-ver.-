#include <stdio.h>

int main(){
	int n, check, pos = 0;
	scanf("%d", &n);
	int a[n], ans[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		check = 1;
		for(int j = 0; j < n; j++){
			if(a[i] == a[j] && i != j){
				check = 0;
				break;
			}
		}
		if(check) ans[pos++] = a[i];
	}
	printf("%d\n", pos);
	for(int i = 0; i < pos; i++){
		printf("%d ", ans[i]);
	}
	return 0;
}
