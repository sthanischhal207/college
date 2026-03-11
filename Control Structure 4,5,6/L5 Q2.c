#include <stdio.h>

int main(){
    int i,j,height;

    printf("Enter Height for the figure: ");
    scanf("%d",&height);

    for(i = 1 ; i <= height ; i++){
        for(j = 0 ; j < height-i ; j++ ){
            printf("  ");
        }
        for(j = 0 ; j < i ; j++ ){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}