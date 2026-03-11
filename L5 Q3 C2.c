#include <stdio.h>

int main(){
    int n,sum = 0;
    int i,N;
    
    //Case II: Skip on neg number entered
    printf("Enter How many numbers you wanna enter: ");
    scanf("%d",&N);

    for(i = 0 ; i < N ; i++){
        printf("Enter a postive number %d: ",i+1);
        scanf("%d",&n);
        if(n<0){
            printf(" \n%d is Invalid\nSkipping it....\n\n",n);
            continue;
        }
        sum += n;
    }

    float avg = sum/i;
    printf("Sum of all the entered number is : %d and Average = %f\n\n",sum,avg);

    return 0;
}