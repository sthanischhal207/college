#include <stdio.h>

int main(){
    int i;
    int UR,LR,p,q,sum = 0;

    printf("Enter Upper Range: ");
    scanf("%d",&UR);
    printf("Enter Lower Range: ");
    scanf("%d",&LR);
    printf("Should be divisible by: ");
    scanf("%d",&p);
    printf("Shouldn't be divisible by: ");
    scanf("%d",&q);

    //Making LR to odd
    if (LR % 2 == 0){
        LR++;
    }


    //Using for loop
    printf("\n\nUsing for loop\nSum of ");
    for(i = LR ; i <= UR ; i+=2 ){
        if(i % p == 0 && i % q != 0){
            printf("%d  ",i);
            sum += i;
        }
    }
    printf("is equal to %d",sum);

    //Using while loop
    i = LR;
    sum = 0;
    printf("\n\nUsing While loop\nSum of ");
    while( i <= UR ){
        if(i % p == 0 && i % q != 0){
            printf("%d  ",i);
            sum += i;
        }
        i+=2;
    }
    printf("is equal to %d",sum);

    //Using do while loop
    i = LR;
    sum = 0;
    printf("\n\nUsing do While loop\nSum of ");
    do{
        if(i % p == 0 && i % q != 0){
            printf("%d  ",i);
            sum += i;
        }
        i+=2;
    }
    while( i <= UR );
    printf("is equal to %d\n",sum);


    return 0;
}