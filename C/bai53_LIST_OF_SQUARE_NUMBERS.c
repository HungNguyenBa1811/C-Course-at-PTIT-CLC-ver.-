#include <stdio.h>
#include <math.h>

int main(){
    int a, b, count = 0;
    scanf("%d %d", &a, &b);   
    int start = ceil(sqrt(a)), end = floor(sqrt(b));
    for(int i = start; i <= end; i++){
        count++;
    }
    printf("%d\n", count);
    for(int i = start; i <= end; i++){
        printf("%d\n", i*i);
    }

    return 0;
}

