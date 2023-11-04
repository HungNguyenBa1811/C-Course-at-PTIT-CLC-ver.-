#include <stdio.h>

int main(){
	int n, shift_right;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &shift_right);
	int a_shift[shift_right];
	for(int i = 0; i < shift_right; i++){
		a_shift[i] = a[i + n - shift_right];
	}
	for(int i = n - shift_right - 1; i >= 0; i--){
	    a[i + shift_right] = a[i];
	}
	for(int i = 0; i < shift_right; i++){
	    a[i] = a_shift[i];
	}
	for(int i = 0; i < n; i++){
	    printf("%d ", a[i]);
	}
	return 0;
}
