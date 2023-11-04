#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char c[105], dup[105];
	gets(c);
	gets(dup);
	char *token = strtok(c, " ");
	while(token != NULL){
		if(strcmp(token, dup) != 0){
			printf("%s ", token);
		}
		token = strtok(NULL, " ");
	}
	return 0;
}
