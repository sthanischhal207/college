//Pointer passed in UDF

#include <stdio.h>

void passpointer(int *);

int main(){
    printf("Enter a Number: ");
    int num;
    scanf("%d",&num);
    int *pt = &num;
    passpointer(pt);
    return 0;
}

void passpointer(int *ptr){
    printf("\n\nMemory Passed: %d\nValue: %d",ptr,*ptr);
}


//Output
/*
Enter a Number: 234


Memory Passed: 2043108860
Value: 234
-------------------------
Enter a Number: 546


Memory Passed: 27997676
Value: 546

*/