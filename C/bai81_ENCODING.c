#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int cases;
	char c[105];
	scanf("%d\n", &cases);
	while(cases--){
		scanf("%s", c);
		int len = strlen(c);
		if(len == 1){
			printf("%c%d\n", c[0], 1);
			continue;
		}
		int cur = c[0];
		int count = 1;
		for(int i = 1; i < len; i++){
			if(c[i] == cur){
				count++;
			} else {
				printf("%c%d", cur, count);
				cur = c[i];
				count = 1;
			}
			if(i == len - 1 && count > 0){
				printf("%c%d", c[len - 1], count);
			}
		}
		printf("\n");
	}
	return 0;
}
