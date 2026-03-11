#include <stdio.h>
void findSum();
int main(){
    findSum();
    return 0;
}
void findSum(){
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
    printf("%d is the sum",sum);
}
