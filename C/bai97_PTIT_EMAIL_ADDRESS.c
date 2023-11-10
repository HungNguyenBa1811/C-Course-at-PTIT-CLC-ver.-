#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
	char c[2000], ans[2000];
	gets(c);
	int pos = 0, len = strlen(c);
	int space_idx = 0;
	for(int i = 1; i < len; i++){
		if(c[i - 1] == ' ' && isalpha(c[i])){
			space_idx = i - 1;
		}
	}
	ans[pos++] = tolower(c[0]);
	for(int i = 1; i < space_idx; i++){
		if(c[i - 1] == ' ' && isalpha(c[i])){
			ans[pos++] = tolower(c[i]);
		}
	}
	for(int i = space_idx + 1; i < len; i++){
		ans[pos++] = tolower(c[i]);
	}		
	ans[pos++] = '\0';
	printf("%s@ptit.edu.vn", ans);
	return 0;
}

