#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[10000];
	int digit = 0, letter = 0, other = 0;
	gets(c);
	int len = strlen(c);
	for(int i = 0; i < len; i++){
		if(isdigit(c[i])){
			digit++;
		} else if(isalpha(c[i])) {
			letter++;
		} else {
			other++;
		}
	}
	printf("%d %d %d", letter, digit, other);
	return 0;
}
