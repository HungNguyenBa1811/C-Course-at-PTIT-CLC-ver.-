#include <stdio.h>

int main(){
	int n, shift_left;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &shift_left);
	int a_shift[shift_left];
	for(int i = 0; i < shift_left; i++){
		a_shift[i] = a[i];
	}
	for(int i = shift_left; i < n; i++){
		a[i - shift_left] = a[i];
	}
	for(int i = n - shift_left; i < n; i++){
		a[i] = a_shift[i - n + shift_left];
	}
	for(int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
