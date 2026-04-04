// Pointer and Array
#include <stdio.h>

int main(){
    int *pt;

    printf("Enter No of elements on an array: ");
    int n;
    scanf("%d",&n);

    int i,arr[n];
    for(i = 0; i<n ; i++){
        printf("Element %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    //displaying array using pointer
    pt = arr;
    printf("\nStored array: ");
    for(i = 0; i<n ; i++){
        printf("%d  ",*(pt+i));
    } 

    return 0;
}

//Output
/*

Enter No of elements on an array: 4
Element 1: 1
Element 2: 3
Element 3: 4
Element 4: 2

Stored array: 1  3  4  2 

*/