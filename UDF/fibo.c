#include <stdio.h>
int fibonacci(int);
int main(){
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if(i==n-1){
        printf("%d is the nth term\n",fibonacci(i));
        if(fibonacci(i)%2==0){
            printf("%d is even",fibonacci(i));
        }
        else{
            printf("%d is odd",fibonacci(i));
        }
    }
    }
    return 0;
}
int fibonacci(int n){
        if(n==1||n==0){
        return n;
        }

        return fibonacci(n-1)+fibonacci(n-2);

}
