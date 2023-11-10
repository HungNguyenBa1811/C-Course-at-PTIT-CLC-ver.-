#include <stdio.h>

int main()
{
    int cases;
    scanf("%d", &cases);
    while(cases--){
        int array_length, highest;
        scanf("%d", &array_length);
        
        int array[array_length];
        for(int i = 0; i < array_length; i++){
            scanf("%d", &array[i]);
        }
        highest = array[0];
        
        for(int i = 1; i < array_length; i++){
            if(highest < array[i]){
                highest = array[i];
            }
        }
        
        printf("%d\n", highest);
        
        for(int i = 0; i < array_length; i++){
            if(highest == array[i]){
                printf("%d ", i);
            }
        }
        
        printf("\n");
    }
    return 0;
}

