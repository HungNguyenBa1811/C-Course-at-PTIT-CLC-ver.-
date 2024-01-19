#include <stdio.h>
#include <math.h>

int main(){
    int n, cases;
    scanf("%d", &cases);
    while(cases--){
        scanf("%d", &n);
		int first, last = n % 10;
		while (n > 9) n /= 10;
		first = n;
		(first == last) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}

