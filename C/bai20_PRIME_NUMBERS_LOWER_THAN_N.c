#include <stdio.h>
#include <math.h>

int main(){
    int n, check;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        check = 1;
        if(i == 2 || i == 3){
			printf("%d\n", i);
			continue;
		}
		if(i % 2 == 0 || i % 3 == 0){
			continue;
		}
		for(int j = 5; j * j <= i; j += 6){
			if(i % j == 0 || i % (j + 2) == 0){
				check = 0;
				break;
			}
		}
        if(check) printf("%d\n", i);
    }
    return 0;
}
