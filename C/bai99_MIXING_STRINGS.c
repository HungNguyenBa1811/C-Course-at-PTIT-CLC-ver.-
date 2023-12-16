#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n = 1;
    char str_1[205], str_2[205], str_12[410], str_merge[410];
    while(n != 0){
    	int pos, check;
        scanf("%d", &n);
        if(!n) continue;
        scanf(" ");
        gets(str_1);
        gets(str_2);
        gets(str_12);
        for(int m = 0; m < n * 2; m++){
        	pos = 0;
        	check = 1;
        	for(int i = 0; i < n; i++){
        		str_merge[pos++] = str_2[i];
        		str_merge[pos++] = str_1[i];
			}
			for(int i = 0; i < n; i++){
				str_1[i] = str_merge[i];
				str_2[i] = str_merge[i + n];
			}
			for(int i = 0; i < n * 2; i++){
				if(str_12[i] != str_merge[i]){
					check = 0;
					break;
				}
			}
			if(check){
				printf("%d\n", m + 1);
				break;
			}
		}
		if(!check) printf("-1\n");
    }
    return 0;
}
