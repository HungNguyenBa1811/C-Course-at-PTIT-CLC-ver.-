#include <stdio.h>

int main(){
    int n, key, j, pos = 1;
    scanf("%d", &n);
    int a[n], ans[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    ans[0] = a[0];
    printf("Step 0: %d\n", ans[0]);
    for(int i = 1; i < n; i++){
        printf("Step %d: ", pos);
        ans[pos++] = a[i];
        key = a[i];
        j = i - 1;
        while(j >= 0 && ans[j] > key){
            ans[j + 1] = ans[j];
            j--;
        }
        ans[j + 1] = key;
        for (int k = 0; k < pos; k++){
            printf("%d ", ans[k]);
        }
        printf("\n");
    }
    return 0;
}
