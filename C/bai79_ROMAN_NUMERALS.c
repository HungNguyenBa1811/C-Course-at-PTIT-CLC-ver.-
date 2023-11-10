#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int dict(char c){
	switch(c){
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}
}
int minus(char c){
	switch(c){
		case 'V':
		case 'X':
			return - 2 + dict(c);
		case 'L':
		case 'C':
			return - 20 + dict(c);
		case 'D':
		case 'M':
			return - 200 + dict(c);
	}
}
int main(){
	int cases;
	char c[1005];
	scanf("%d\n", &cases);
	while(cases--){
		gets(c);
		int len = strlen(c);
		int ans = 0;
		int cur = dict(c[0]);
		for(int i = 0; i < len; i++){
			if(dict(c[i]) <= cur){
				ans += dict(c[i]);
				cur = dict(c[i]);
			} else {
				ans += minus(c[i]);
				cur = dict(c[i - 1]);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
