#include <stdio.h>

int main(){
    int a, b, temp, ans = 0;
    scanf("%d %d", &a, &b);
    if(a > b){
        temp = b;
        b = a;
        a = temp;
    }
    for(int i = a; i <= b; i++){
        ans += i;
    }
    printf("%d\n", ans);
    return 0;
}
