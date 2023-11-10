#include <stdio.h>
#include <string.h>

int main(){
	int cases;
	scanf("%d\n", &cases);
	while(cases--){
		char c[505], d[505];
		gets(c);
		gets(d);
		int check_a_bigger = 1;
		int equal = 0;
		int max_len = (strlen(c) >= strlen(d)) ? strlen(c) : strlen(d);
		int a[505] = {0}, b[505] = {0}, ans[505] = {0};
		for(int i = strlen(c) - 1; i >= 0; i--){
			a[strlen(c) - 1 - i] = c[i] - '0';
		}
		for(int i = strlen(d) - 1; i >= 0; i--){
			b[strlen(d) - 1 - i] = d[i] - '0';
		}
		for(int i = max_len - 1; i >= 0; i--){
			if(a[i] < b[i]){
				check_a_bigger = 0;
				equal = 0;
				break;
			} else if(a[i] > b[i]){
				equal = 0;
				break;
			} else {
				equal = 1;
			}
		}
		if(equal){
			printf("0\n");
			continue;
		}
//		printf("%d", check_a_bigger);
		int temp = 0, sum = 0;
		for(int i = 0; i < max_len; i++){
			if(check_a_bigger) sum = a[i] - b[i] - temp;
			else sum = b[i] - a[i] - temp;
			if(sum < 0){
				temp = 1;
				sum += 10;
			} else {
				temp = 0;
			}
			ans[i] = sum;
		}
		int k = max_len - 1;
		while(ans[k] == 0){
			k--;
		}
		for(int i = k; i >= 0; i--){
			printf("%d", ans[i]);
		}
		printf("\n");
	}
	return 0;
}
