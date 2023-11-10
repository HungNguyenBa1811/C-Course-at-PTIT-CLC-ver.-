#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int n, base;
		scanf("%d %d", &n, &base);
		int a[100005], pos = 0;
		while(n > 0){
			a[pos++] = n % base;
			n /= base;
		}
		for(int i = pos - 1; i >= 0; i--){
			if(a[i] >= 10) printf("%c", a[i] - 10 + 'A');
			else printf("%d", a[i]);
		}
		printf("\n");
	}
	return 0;
}
