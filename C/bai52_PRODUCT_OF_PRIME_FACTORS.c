#include <stdio.h>
#include <math.h>

int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int n, count = 0, markiplier = 1, i;
        scanf("%d", &n);
        while (n % 2 == 0){
            n /= 2;
            count = 2;
        }
        if(count != 0){
            markiplier *= count;
        }
        for (i = 3; i <= sqrt(n); i += 2){
            count = 0;
            while (n % i == 0){
                n /= i;
                count = i;
            }
            if(count != 0){
                markiplier *= count;
            }
        }
        markiplier *= n;
        printf("%d\n", markiplier);
    }
    return 0;
}
