/*3

WAP in C to find the sum of principal and secondary diagonal elements of a 2D array
and check whether the sum is an Armstrong number or not.
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

    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i][i];
        if (i != (n-1-i)) {
            sum += arr[i][n-1-i];
        }
    }
    if(n%2 != 0){       //in case of odd no of rows and column
        int mid = (int)((n-1)/2);
        sum += arr[mid][mid];
    }

    printf("\nSum = %d\n", sum);

    //Check Armstrong logic
    int backup = sum;
    int cnt = log10(sum)+1;
    int rem,arm=0;
    while(sum != 0){
        rem = sum%10;
        arm += pow(rem,cnt);
        sum /= 10;
    }
    if(backup == arm){
        printf("%d is armstrong Number",backup);
        return 0;
    }
    printf("%d is not armstrong Number",backup);
    return 0;
}
