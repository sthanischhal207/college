#include<stdio.h>

int main(){
    char str1[100];
    printf("Enter String 1: ");
    scanf(" %[^\n]s",str1);

    int i = 0;
    while(str1[i] != '\0'){
        i++;
    }
    int j=0;
    while(str1[j] != '\0'){
        printf("%d,%d :",i,j);
        j++;
        i--;
        if(str1[i-1]!=str1[j]){
            printf("\n%s is not a palindrome\n",str1);
            return 0;
        } 
    }

    printf("\n%s is a palindrome\n",str1);

    return 0;
}