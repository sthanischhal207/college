/*
Write a program to find all positions of a character specified by the user in a
sentence of text entered by the user using pointers and strings (character array).
*/

#include<stdio.h>

void print_positions(char *input_string , char input_char){
    char ch;
    int i  = 0;

    printf("Postions are -> ");

    while((ch = input_string[i])!='\0'){
        if(ch == input_char){
            printf("%d ",i);
        }
        i++;
    }
}

int main(){
    char input_string[100];
    char input_char;

    printf("Enter the String: ");
    scanf("%[^\n]s",input_string);

    printf("Enter the Character: ");
    scanf(" %c",&input_char);

    print_positions(input_string,input_char);

    return 0;
}