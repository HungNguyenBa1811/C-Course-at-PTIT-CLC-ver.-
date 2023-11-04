#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int cases;
	char c[105];
	scanf("%d\n", &cases);
	while(cases--){
		gets(c);
		char *token = strtok(c, " ");
		while(token != NULL){
			int len = strlen(token);
			token[0] = toupper(token[0]);
			for(int i = 1; i < len; i++){
				token[i] = tolower(token[i]);
			}
			printf("%s ", token);
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
	return 0;
}
