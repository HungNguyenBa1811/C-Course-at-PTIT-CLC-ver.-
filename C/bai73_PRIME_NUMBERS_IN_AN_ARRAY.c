#include <stdio.h>

int main(){
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int n, pos = 0, check;
        scanf("%d", &n);
        int a[n], ans[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++){
            check = 0;
            if(a[i] < 2){
                check = 1;
            } else {
                for(int j = 2; j <= a[i] / 2; j++){
                    if(a[i] % j == 0){
                        check = 1;
                        break;
                    }
                }
            }
            if(check == 0){
                ans[pos++] = a[i];
            }
        }
        for(int i = 0; i < pos; i++){
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
    return 0;
}
