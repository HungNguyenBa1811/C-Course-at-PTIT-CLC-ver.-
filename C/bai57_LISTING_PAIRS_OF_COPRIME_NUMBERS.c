#include <stdio.h>

int main(){
    int a, b, check;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        for(int j = i + 1; j <= b; j++){
            check = 1;
            for(int k = 2; k < b; k++){
                if(i % k == 0 && j % k == 0){
                    check = 0;
                    break;
                }
            }
            if(check){
                printf("(%d,%d)\n", i, j);
            }
        }
    }
    return 0;
}
