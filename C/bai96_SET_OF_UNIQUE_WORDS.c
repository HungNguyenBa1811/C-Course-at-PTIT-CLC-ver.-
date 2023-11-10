#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
	return strcmp((char*) a, (char*) b);
}

int main(){
	int check, m = 0, n = 0;	
	char c[105], d[105], a_c[105][105], a_d[105][105];
	gets(c);
	gets(d);
	char *token = strtok(c, " ");
	while(token != NULL){
		strcpy(a_c[m++], token);
		token = strtok(NULL, " ");
	}	
	token = strtok(d, " ");
	while(token != NULL){
		strcpy(a_d[n++], token);		
		token = strtok(NULL, " ");
	}
	qsort(a_c, m, sizeof(a_c[0]), compare);
	for(int i = 0; i < m; i++){
		if(strcmp(a_c[i], a_c[i + 1]) == 0) continue;
		check = 1;
		for(int j = 0; j < n; j++){
			if(strcmp(a_c[i], a_d[j]) == 0){
				check = 0;
				break;
			}
		}
		if(check) printf("%s ", a_c[i]);
	}
	return 0;
}
