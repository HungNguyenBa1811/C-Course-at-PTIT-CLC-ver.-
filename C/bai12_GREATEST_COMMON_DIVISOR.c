#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int n, m;
        scanf("%d %d", &n, &m);
        while(n != 0 && m != 0){
            if(n > m) n -= m;
            else m -= n;
        }
        printf("%d\n", n + m);
    }
    return 0;
}
