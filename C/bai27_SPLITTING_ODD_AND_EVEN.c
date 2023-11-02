#include <stdio.h>

int main(){
    int n, pos_odd = 0, pos_even = 0;
    scanf("%d", &n);
    int a[n], a_odd[n], a_even[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < n; j++){
        if(a[j] % 2 == 1) a_odd[pos_odd++] = a[j];
        else a_even[pos_even++] = a[j];
    }
    for(int i = 0; i < pos_even; i++){
        printf("%d ", a_even[i]);
    }
    printf("\n");
    for(int i = 0; i < pos_odd; i++){
        printf("%d ", a_odd[i]);
    }
    return 0;
}
