#include <stdio.h>

int isFibonacci(long long n){
    long long a = 0, b = 1, temp;
    if(n == 0) return 1;
    while(b < n){
        temp = a;
        a = b;
        b = temp + b;
    }
    return b == n;
}

int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        long long n;
        scanf("%lld", &n);
        if(isFibonacci(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
