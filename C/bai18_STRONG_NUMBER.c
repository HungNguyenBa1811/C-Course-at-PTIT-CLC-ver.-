#include <stdio.h>

int main(){
    int n, temp, remain, factorial, i, sum = 0;
    scanf("%d", &n);
    temp = n;
    while(num > 0){
        remain = n % 10;
        factorial = 1;
        i = 1;
        while(i <= remain){
            factorial *= i;
            i++;
        }
        sum += factorial;
        n /= 10;
    }
    if(sum == temp) printf("1");
    else printf("0");
    return 0;
}
