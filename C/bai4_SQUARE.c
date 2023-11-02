#include <stdio.h>

int main(){
    int x, cases;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &x);
        printf("%lld\n", (long long) x * x);
    }
    return 0;
}
