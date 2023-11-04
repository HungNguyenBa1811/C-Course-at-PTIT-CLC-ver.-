#include <stdio.h>

int main(){
	int n, count = 0, temp;
	scanf("%d", &n);
	int a[n][3];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		temp = 0;
		for(int j = 0; j < 3; j++){
			if(a[i][j] == 1){
				temp++;
			}
		}
		if(temp >= 2){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
