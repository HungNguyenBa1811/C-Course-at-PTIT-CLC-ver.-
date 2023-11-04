#include <stdio.h>

int main(){
    int a, b, temp, n_last, n_cpy, remain, sum, factorial;
    scanf("%d %d", &a, &b);
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(int j = a; j <= b; j++){
        sum = 0;
        n_last = j;
        n_cpy = j;
        while(n_cpy > 0){
            remain = n_cpy % 10;
            factorial = 1;
            for(int i = 1; i <= remain; i++){
                factorial *= i;
            }
            sum += factorial;
            n_cpy /= 10;
        }
        if(sum == n_last){
            printf("%d ", n_last);
        }
    }
    return 0;
}
