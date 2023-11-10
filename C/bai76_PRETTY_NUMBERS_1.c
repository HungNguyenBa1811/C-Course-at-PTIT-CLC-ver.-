#include <stdio.h>
#include <string.h>

int main(){
	int cases;
	char c[1000], c_rev[1000];
	scanf("%d\n", &cases);
	while(cases--){
		fgets(c, sizeof(c), stdin);
		int check = 1, length_c = strlen(c) - 1, result;
		for(int i = length_c - 1; i >= 0; i--){
			c_rev[i] = c[length_c - 1 - i];
		}
		
		for(int i = 0; i < length_c; i++){
			result = c[i] - '0';
			if(result % 2 != 0 || c[i] != c_rev[i]){
				check = 0;
				break;
			}
		}
		if(check){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}
