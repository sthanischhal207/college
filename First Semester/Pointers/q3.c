#include <stdio.h>


int main(){
    int m,n;
    printf("Enter M: ");
    scanf("%d",&m);
    printf("Enter N: ");
    scanf("%d",&n);
    int *pm = &m , *pn = &n;
    int arr[n-m+1];
    int i;
    for(i=m ; i<=n ; i++){
        arr[i-m] = i;
    }
    int *ptr;
    ptr = arr;
    int sum=0;
    printf("-----%d------",*ptr);
    for(i=m ; i<=n ; i++){
         sum += *(ptr+i-m);
    }
    printf("\nSum is %d\nAverage is %d\n",sum,(int)(sum/(i-m)));
    

    return 0;
}