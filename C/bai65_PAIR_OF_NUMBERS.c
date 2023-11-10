#include <stdio.h>

int main(){
	int cases;
	scanf("%d", &cases);
	while(cases--){
		int a, b, c, d, min, max_1, max_2, div, remain;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		min = (a < b) ? a : b;
		max_1 = (a > b) ? a : b;
		while(min > 0){
		    div = max_1 / min;
			remain = max_1 % min;
		    max_1 = (max_1 - remain) / div;
		    min = remain;
		}
		min = (c < d) ? c : d;
		max_2 = (c > d) ? c : d;
		while(min > 0){
		    div = max_2 / min;
			remain = max_2 % min;
		    max_2 = (max_2 - remain) / div;
		    min = remain;
		}
		if(max_1 == max_2) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
