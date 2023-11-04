#include <stdio.h>

int main(){
    int x1_1, y1_1, x2_1, y2_1, x1_2, y1_2, x2_2, y2_2;
    scanf("%d %d %d %d %d %d %d %d", &x1_1, &y1_1, &x2_1, &y2_1, &x1_2, &y1_2, &x2_2, &y2_2);
    int max_x = x1_1, min_x = x1_1, max_y = y1_1, min_y = y1_1;
    max_x = (max_x < x2_1) ? x2_1 : max_x;
    max_x = (max_x < x1_2) ? x1_2 : max_x;
    max_x = (max_x < x2_2) ? x2_2 : max_x;
    min_x = (min_x > x2_1) ? x2_1 : min_x;
    min_x = (min_x > x1_2) ? x1_2 : min_x;
    min_x = (min_x > x2_2) ? x2_2 : min_x;
    max_y = (max_y < y2_1) ? y2_1 : max_y;
    max_y = (max_y < y1_2) ? y1_2 : max_y;
    max_y = (max_y < y2_2) ? y2_2 : max_y;
    min_y = (min_y > y2_1) ? y2_1 : min_y;
    min_y = (min_y > y1_2) ? y1_2 : min_y;
    min_y = (min_y > y2_2) ? y2_2 : min_y;
    (max_x - min_x > max_y - min_y) ? printf("%d", (max_x - min_x) * (max_x - min_x)) : printf("%d", (max_y - min_y) * (max_y - min_y));
	return 0;
}

