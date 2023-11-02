#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int n, temp, odd = 0, even = 0;
        scanf("%d", &n);
        while(n > 0){
            temp = n % 10;
            if(temp % 2 == 0) even++;
            else odd++;
            n /= 10;
        }
        printf("%d %d\n", odd, even);
    }
    return 0;
}
