#include <stdio.h>
int findSum();
int main(){
    int sum=findSum();
    printf("%d is the sum",sum);
    return 0;
}
int findSum(){
     int P,Q,start,end;
    printf("Enter start and end numbers:\n");
    scanf("%d%d",&start,&end);
    printf("Enter P and Q:\n");
    scanf("%d%d",&P,&Q);
    int i,sum=0;
    for(i=start;i<=end;i++){
        if(i%2!=0){
        if(i%P==0 && i%Q!=0){
        sum+=i;
        }}
    }
    return sum;
}
