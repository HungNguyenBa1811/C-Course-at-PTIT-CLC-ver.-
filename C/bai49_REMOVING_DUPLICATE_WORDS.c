#include <stdio.h>
#include <string.h>

int main(){
    char c[105];
    gets(c);
    char *words[105];
    char *token = strtok(c, " ");
    int count = 0;
    while(token != NULL){
        int check = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                check = 1;
                break;
            }
        }
        if (!check) {
            words[count] = token;
            count++;
        }
        token = strtok(NULL, " ");
    }
    for(int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    return 0;
}
