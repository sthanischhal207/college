#include <stdio.h>

int main(){
    int n,sum = 0;
    int i,N;
    
    //Case I: End program on neg number entered
    printf("Enter How many numbers you wanna enter: ");
    scanf("%d",&N);

    for(i = 0 ; i < N ; i++){
        printf("Enter a postive number %d: ",i+1);
        scanf("%d",&n);
        if(n<0){
            printf("\n\n%d is Invalid\nExiting Loop.....\n\n",n);
            break;
        }
        sum += n;
    }

    float avg = sum/i;
    printf("Sum of all the entered number is : %d and Average is %f\n\n",sum,avg);

    return 0;
}