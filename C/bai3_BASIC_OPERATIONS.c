#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	(y != 0) ? printf("%d %d %d %.2f %d", x + y, x - y, x * y, (float) x / y, x % y) : printf("%d", y);
	return 0;
}
