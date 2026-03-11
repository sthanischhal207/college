/*
Write a program to read a 4*4 square matrix, find the minimum value of that matrix and
assign it to variable min, and replace all the elements of the principal diagonal with the
min if the element is odd otherwise replace all the elements of secondary elements with
min and display the updated matrix.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int i,j,n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int arr[n][n];
    for (i = 0; i < n; i++) {
        printf("ROW %d -> ", i + 1);
        for(j = 0 ; j<n ; j++){
            scanf("%d",&arr[i][j]);
        }
        //printf("\n");
    }

    int min = arr[0][0];
    for (i = 0; i < n; i++) {
        for(j = 0 ; j<n ; j++){
            if(min > arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    printf("\nMin = %d\n", min);

    if(min%2 != 0){         //odd case
        for(i=0 ; i<n ; i++){
           arr[i][i] = min;
        }
    }
    else{
        for(i=0 ; i<n ; i++){
            arr[i][n-1-i] = min ;
        }
    }

    for (i = 0; i < n; i++) {
        printf("ROW %d -> ", i + 1);
        for(j = 0 ; j<n ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nMin = %d\n", arr[0]);
    
    return 0;
}