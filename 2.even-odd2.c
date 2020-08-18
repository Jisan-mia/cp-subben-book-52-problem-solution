#include <stdio.h>
#include <string.h>

int main(){
    int T,  i;
    char n[101];

    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%s", &n);
        //the next line to print the last number of the string for surity
       // printf("%c\n", n[strlen(n)-1] );
        if(n[strlen(n) - 1] % 2 == 0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }

    return 0;
}
