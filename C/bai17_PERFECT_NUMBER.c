#include <stdio.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0) sum += i;
        int j = n / i;
        if(n % j == 0 && n != j) sum += j;
    }
    if(sum == n) printf("1\n");
    else printf("0\n");
    return 0;
}
