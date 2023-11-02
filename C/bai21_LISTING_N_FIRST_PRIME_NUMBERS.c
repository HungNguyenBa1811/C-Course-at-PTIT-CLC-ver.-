#include <stdio.h>
#include <math.h>

int main(){
    int n, check, i = 2, count = 0;
    scanf("%d", &n);
    while(count < n){
        check = 1;
        if(i == 2 || i == 3){
        	printf("%d\n", i);
			count++;
			i++;
			continue;
		}
		if(i % 2 == 0 || i % 3 == 0){
			i++;
			continue;
		}
		for(int j = 5; j * j <= i; j += 6){
			if(i % j == 0 || i % (j + 2) == 0){
				check = 0;
				break;
			}
		}
        if(check){
			printf("%d\n", i);
			count++;
		}
        i++;
    }
    return 0;
}
