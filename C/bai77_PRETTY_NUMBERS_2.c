#include <stdio.h>
#include <string.h>

int main(){
	int cases;
	char c[1000];
	scanf("%d\n", &cases);
	while(cases--){
		fgets(c, sizeof(c), stdin);
		int check = 1, length_c = strlen(c) - 1, sum = 0, temp = 0;
		if(c[length_c - 1] != '8'){
			check = 0;
			printf("NO\n");
			continue;
		}
		for(int i = 0; i < length_c; i++){
			temp = c[i] - '0';
			sum += temp;
		}
		if(sum % 10 == 0){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
	return 0;
}
