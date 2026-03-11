#include <stdio.h>

int main(){
    
    int m,n;
    printf("Enter M: ");
    scanf("%d",&m);
    printf("Enter N: ");
    scanf("%d",&n);
    int *pm = &m , *pn = &n;
    int i,sum=0;
    for(i=*pm ; i<=*pn ; i++){
        sum += i;
    }

    printf("\nSum is %d\nAverage is %d\n",sum,(int)(sum/i));
    
    return 0;

}