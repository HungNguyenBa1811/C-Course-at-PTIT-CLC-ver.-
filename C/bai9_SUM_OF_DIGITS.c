#include <stdio.h>

int main(){
    int n, cases;
    scanf("%d", &cases);
    while(cases--){
    	scanf("%d", &n);
        int sum = 0;
        while(n != 0){
            sum += n % 10;
            n /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}
