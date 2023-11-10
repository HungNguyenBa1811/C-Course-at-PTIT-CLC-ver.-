#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int number = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = number + i - 1; j >= number; j--) {
                printf("%d ", j);
            }
        } else {
            for (int j = number; j < number + i; j++) {
                printf("%d ", j);
            }
        }
        printf("\n");
        number += i;
    }
    
    return 0;
}
