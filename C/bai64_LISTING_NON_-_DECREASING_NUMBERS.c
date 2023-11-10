#include <stdio.h>
#include <math.h>

int non_decr_num(int n){
    if(n % 10 == 0) return 0;
    int digit;
    int max = n % 10;
    while(n > 0){
        digit = n % 10;
        if(digit > max) return 0;
        max = digit;
        n /= 10;
    }
    return 1;
}

int main(){
    int cases;
    scanf("%d", &cases);
    while (cases--){
    	int n;
        scanf("%d", &n);
        int start = pow(10, n - 1);
        int end = pow(10, n);
        for (int j = start; j < end; j++){
            if(non_decr_num(j)) printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
