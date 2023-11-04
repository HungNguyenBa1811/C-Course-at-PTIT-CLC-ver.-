#include <stdio.h>

int main(){
    int a, b, sum, temp;
    scanf("%d %d", &a, &b);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(int j = a; j <= b; j++){
        sum = 0;
        for(int i = 1; i <= j/2; i++){
            if(j % i == 0){
                sum += i;
            }
        }
        if(sum == j){
            printf("%d ", j);
        }
    }
    return 0;
}
