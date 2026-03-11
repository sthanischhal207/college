#include <stdio.h>


int main(){
    int m,n;
    printf("Enter M: ");
    scanf("%d",&m);
    printf("Enter N: ");
    scanf("%d",&n);
    int *pm = &m , *pn = &n;
    int arr[m-n+1];
    int i;
    for(i=m ; i<=n ; i++){
        printf("Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr = arr;

    return 0;
}