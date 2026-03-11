/*
Write a program to find the largest and smallest element of an array, display the numbers
in ascending as well as descending order using a single function and display the result in
the calling function.
*/

#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Number %d -> ", i + 1);
        scanf("%d",&arr[i]);
        
    }
    int tmp;
    for (i = 0; i < n; i++) {
        for(j = i+1 ; j<n ; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i]=arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("\nMin = %d\n", arr[0]);
    printf("Max = %d\n", arr[n-1]);
    printf("\n In Ascending Order: ");
    for (i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    printf("\n In Decending Order: ");
    for (i = n-1; i >=0; i--) {
        printf("%d ",arr[i]);
    }

    return 0;
}
