#include <stdio.h>
#include <string.h>

int main(){
	int cases;
	scanf("%d\n", &cases);
	while(cases--){
		char c[5005], d[5005];
		gets(c);
		getchar();
		gets(d);
		int max_len = (strlen(c) >= strlen(d)) ? strlen(c) : strlen(d);
		int a[5005] = {0}, b[5005] = {0}, ans[5005] = {0};
		for(int i = strlen(c) - 1; i >= 0; i--){
			a[strlen(c) - 1 - i] = c[i] - '0';
		}
		for(int i = strlen(d) - 1; i >= 0; i--){
			b[strlen(d) - 1 - i] = d[i] - '0';
		}
		int temp = 0, sum = 0;
		for(int i = 0; i < max_len; i++){
			sum = a[i] + b[i] + temp;
			if(sum >= 10){
				temp = 1;
				sum -= 10;
			} else {
				temp = 0;
			}
			ans[i] = sum;
		}
		if(temp == 1){
			printf("1");
		}
		for(int i = max_len - 1; i >= 0; i--){
			printf("%d", ans[i]);
		}
		printf("\n");
	}
	return 0;
}
