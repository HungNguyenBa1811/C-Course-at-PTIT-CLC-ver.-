#include <stdio.h>

int main(){
    int n, m, pos, temp;
    scanf("%d %d", &n, &m);
    int a[n + m], b[m];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
	pos = n;
    for(int i = 0; i < m; i++) {
    	a[pos++] = b[i];
    }
    for(int i = 0; i < pos - 1; i++){
        for(int j = 0; j < pos - i - 1 ; j++){
            if(a[j] > a[j + 1]){
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
	}
    for(int i = 0; i < pos; i++){
    	if(a[i] != a[i + 1]) printf("%d ", a[i]);
	}
    return 0;
}
