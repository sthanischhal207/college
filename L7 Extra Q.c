#include <stdio.h>

int main(){

    int n,i,j;
    printf("Enter Number of elements: ");
    scanf(" %d",&n);
    int arr[n];
    for(i = 0 ; i<n ; i++){
        printf("Number %d: ",i+1);
        scanf(" %d",&arr[i]);
    }

    int array_cnt[n];
    
    int count;
    for(i = 0 ; i<n ; i++){
        count = 0;
        for(j=0 ; j<n ; j++){
            if(arr[i] == arr[j]){
                count+=1;
            }
        }
        array_cnt[i] = count;
    }

    int tmp;
    for (i = 0; i < n; i++) {
        for(j = i+1 ; j<n ; j++){
            if(array_cnt[i] > array_cnt[j]){
                tmp = array_cnt[i];
                array_cnt[i]=array_cnt[j];
                array_cnt[j] = tmp;
            }
        }
    }
    // for(i = 0 ; i<n ; i++){
    //     printf("%d : ",array_cnt[i]);
    // }

    int L = array_cnt[0], H= array_cnt[n-1];
    printf("\nMin = %d\n", L);
    printf("Max = %d\n", H);
    int D = L+H;

    int rev,rem;
    count= 0;

    for(i = 10 ; i<=1001 ; i++ ){
        n=i;
        rev = 0;
        while(n !=0){
            rem = n%10;
            rev = rev*10+rem;
            n/=10;
        }
        if(i == rev){
            printf("%d :",rev);
            count++;
        }
        if(count == D){
            break;
        }
    }
    if(i == 1002){
        printf("\n\n%dth Palindrome is Out Of Range",D);
    }
    else{
        printf("\n\n%dth Palindrome is %d",D,i);
    }
    return 0;
}