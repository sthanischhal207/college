#include <stdio.h>

struct student{
    char name[50];
    int roll;
};

void get_data(struct student *S);
void print_data(struct student *S);

int main(){
    struct student S;
    get_data(&S);
    print_data(&S);
    return 0;
}

void get_data(struct student *S){
    printf("Enter the following data:\n");
    printf("Name: ");
    scanf("%s",&S->name);
    printf("Roll no: ");
    scanf("%d",&S->roll);
}

void print_data(struct student *S){
    printf("\n\nName: %s",S->name);
    printf("\nRoll no: %d\n\n",S->roll);
}