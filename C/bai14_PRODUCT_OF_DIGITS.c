#include <stdio.h>

int main(){
    int n, ans = 1;
    scanf("%d", &n);
    while(n > 0){
        ans *= n % 10;
        n /= 10;
    }
    printf("%d\n", ans);
    return 0;
}
