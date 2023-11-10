#include <stdio.h>

int main(){
	int x1, y1, x2, y2, x3, y3;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	int temp;
	if(x1 > y1){
		temp = x1;
		x1 = y1;
		y1 = temp; 
	}
	if(x2 > y2){
		temp = x2;
		x2 = y2;
		y2 = temp; 
	} 
	if(x3 > y3){
		temp = x3;
		x3 = y3;
		y3 = temp; 
	}
    if(y1 == y2 && y2 == y3 && x1 + x2 + x3 == y1){
        printf("YES\n");
    }
	int check = 0; 
	if(y3 == x3 + y1 && y1 == x2 && y2 + x1 == y3 || y3 == x1 + x3 && y2 == x1 && y1 + x2 == y3 || y3 == x3 + y1 && y1 == y2 && x1 + x2 == y3 || y3 == x1 + x3 && x2 == x1 && y1 + y2 == y3 || y2 == x2 + y3 && x1 == y3 && y1 + x3 == y2 || y2 == y1 + y3 && x1 == x3 && x1 + x2 == y2 || y2 == y1 + x2 && y3 == y1 && x1 + x3 == y2 || y2 == x2 + y1 && x3 == y1 && x1 + y3 == y2 || y1 == x1 + x2 && x2 == y3 && x3 + y2 == y1 || y1 == y2 + x1 && y2 == x3 && y3 + x2 == y1 || y1 == x1 + y2 && y3 == y2 && x2 + x3 == y1 || y1 == x1 + x2 && x2 == x3 && y2 + y3 == y1){
	    check = 1;
	}
	if(check == 1){
	    printf("YES\n");
	} else if(check == 0){
	    printf("NO\n");
	}
}
