#include <stdio.h>
#include <math.h>

int main(){
    int x, cases;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &x);
        int x_sqrt = (int) sqrt(x);
        if(x_sqrt * x_sqrt == x){
          printf("YES\n");
        } else {
          printf("NO\n");
        }
    }
    return 0;
}
