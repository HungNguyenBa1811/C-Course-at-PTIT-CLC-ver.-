#include <stdio.h>
#include <string.h>

int main(){
	int cases;
	char c[205];
	scanf("%d\n", &cases);
	while(cases--){
		gets(c);
		int count = 0;
		char *token = strtok(c, " ");
		while(token != NULL){
			count++;
			token = strtok(NULL, " ");
		}
		printf("%d\n", count);
	}
	return 0;
}
