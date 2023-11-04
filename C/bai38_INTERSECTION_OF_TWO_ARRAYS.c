#include <stdio.h>

int main(){
    int n, m, temp, pos = 0;
    scanf("%d %d", &n, &m);
    int a[n], b[m], c[100005] = {0}, ans[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    for(int i = 0; i < n; i++){
        c[a[i]]++;
    }
    for(int i = 0; i < m; i++){
        if(c[b[i]] > 0) ans[pos++] = b[i];
    }
    for(int i = 0; i < pos - 1; i++){
        for(int j = 0; j < pos - i - 1 ; j++){
            if(ans[j] > ans[j + 1]){
                temp = ans[j + 1];
                ans[j + 1] = ans[j];
                ans[j] = temp;
            }
        }
    }
    for(int i = 0; i < pos; i++){
        if(ans[i] != ans[i + 1]) printf("%d ", ans[i]);
	}
    return 0;
}
